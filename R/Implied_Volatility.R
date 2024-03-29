#' @title
#' Computes the implied volatility for various options via Newton's method
#'
#' @description
#' If the value of an option, and other (model)parameters like the risk-free
#' interest rate, the time-to-maturity, and the dividend yield are known, the
#' assumed volatility of the underlying asset, the *implied volatility* can be
#' inferred.
#' See Hull (2022).
#'
#' @references
#' Hull, J. C. (2022). Options, futures, and other derivatives (11th Edition).
#' Pearson
#'
#' @export
#'
#' @seealso [BS_Implied_Volatility] for the special case
#' option_type = "European" and payoff in c("call", "put")
#'
#' @param option_price - current price of the option
#' @param initial_price - initial price of the underlying asset
#' @param exercise_price - strike price of the option
#' @param r - risk-free interest rate
#' @param time_to_maturity - time to maturity in years
#' @param dividend_yield - dividend yield
#' @param model - the model to be chosen
#' @param option_type in c("European", "American", "Geometric Asian", "Asian",
#' "Digital") - the type of option to be considered
#' @param payoff - in c("call", "put")
#' @param max_iter maximal number of iterations of the approximation
#' @param start_volatility initial guess
#' @param precision precision of the computation
#'
#' @return Named vector containing the values of the Greeks specified in the
#' parameter \code{greek}.
#'
#' @examples Implied_Volatility(15, r = 0.05, option_type = "Asian",
#' payoff = "call")

Implied_Volatility <-
  function(
    option_price,
    initial_price = 100,
    exercise_price = 100,
    r = 0,
    time_to_maturity = 1,
    dividend_yield = 0,
    model = "Black_Scholes",
    option_type = "European",
    payoff = "call",
    start_volatility = 0.3,
    precision = 1e-6,
    max_iter = 30) {

    ## first the simplest European option case

    if (option_type == "European" && payoff %in% c("put", "call")) {
      return(BS_Implied_Volatility(
        option_price = option_price,
        initial_price = initial_price,
        exercise_price = exercise_price,
        r = r,
        time_to_maturity = time_to_maturity,
        dividend_yield = dividend_yield,
        payoff = payoff,
        start_volatility = start_volatility))
    }

    ## Now the other cases

    # Start volatility given by the European case

    # We compute the option price with zero volatility to check if
    # BS_Implied_Volatility can deliver a viable starting value

    if(option_type == "Asian") {
      option_type_start_price <- "Geometric Asian"
    } else {
      option_type_start_price <- "European"
    }

    option_price_zero_vol <-
      Greeks(
        initial_price = initial_price,
        exercise_price = exercise_price,
        r = r,
        time_to_maturity = time_to_maturity,
        volatility = 1e-12,
        dividend_yield = dividend_yield,
        option_type = option_type_start_price,
        payoff = payoff,
        greek = "fair_value"
      )

    if(option_price > option_price_zero_vol) {

    start_volatility <-
      Implied_Volatility(
        option_price = option_price,
        initial_price = initial_price,
        exercise_price = exercise_price,
        r = r,
        time_to_maturity = time_to_maturity,
        dividend_yield = dividend_yield,
        option_type = option_type_start_price,
        payoff = payoff,
        start_volatility = start_volatility)

    } else {
      start_volatility = 0.3
    }

    fair_value_and_vega_function <-
      function(volatility) {

        Greeks(initial_price = initial_price,
               exercise_price = exercise_price,
               r = r,
               time_to_maturity = time_to_maturity,
               volatility = volatility,
               dividend_yield = dividend_yield,
               model = model,
               option_type = option_type,
               payoff = payoff,
               greek = c("fair_value", "vega"))
      }

    volatility <- start_volatility

    ## check if option price can be obtained, we check for two volatility
    ## values, since volatility = 1e-9 gives NA for some option types

    option_price_0 <-
      min(
        Greeks(initial_price = initial_price,
               exercise_price = exercise_price,
               r = r,
               time_to_maturity = time_to_maturity,
               volatility = 1e-9,
               dividend_yield = dividend_yield,
               model = model,
               option_type = option_type,
               payoff = payoff,
               greek = "fair_value"),
        Greeks(initial_price = initial_price,
               exercise_price = exercise_price,
               r = r,
               time_to_maturity = time_to_maturity,
               volatility = 0.003,
               dividend_yield = dividend_yield,
               model = model,
               option_type = option_type,
               payoff = payoff,
               greek = "fair_value"),
        na.rm = TRUE
      )


    if (option_price_0 > option_price) {
      stop("Option price is too low. Implied volatility is not defined.")
    }

    iter <- 0

    while(TRUE) {

      iter <- iter + 1

      if (iter > max_iter) {
        stop("Computation not succesful. Try with lower precision, larger number of Iterations (max_iter) or larger number of paths")
      }

      fair_value_and_vega <- fair_value_and_vega_function(volatility)

      if (any(is.na(fair_value_and_vega))) {
        stop("Numerical error. Option price possibly too high.")
      }

      fair_value <- fair_value_and_vega["fair_value"]

      vega <- fair_value_and_vega["vega"]

      if (abs(fair_value - option_price) < precision) {
        return(volatility)
      }

      volatility <-
        max(1e-6, volatility - ((fair_value - option_price) / vega))

    }

  }
