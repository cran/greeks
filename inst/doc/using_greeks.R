## ---- include = FALSE---------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup--------------------------------------------------------------------
library(greeks)

## ----eval=FALSE---------------------------------------------------------------
#  # Load package
#  library(greeks)
#  # Start GUI
#  Greeks_UI()

## -----------------------------------------------------------------------------
library(greeks)

## -----------------------------------------------------------------------------
# Option price and most common Greeks of a European call option on a share with
# price 100 and volatility of 30%, where the exercise price is 120, the time to
# maturity of 5 years, and the riskless interest rate of 1%.

Greeks(initial_price = 100,
       exercise_price = 120,
       r = 0.01,
       time_to_maturity = 5,
       volatility = 0.30,
       payoff = "call")

## -----------------------------------------------------------------------------
# Option price and most common Greeks of an American put option on a share with
# price 100 and volatility of 25%, where the exercise price is 100, the time to
# maturity of 1 year, and the riskless interest rate of -0.5%.

Greeks(initial_price = 100,
       exercise_price = 100,
       r = -0.005,
       time_to_maturity = 1,
       volatility = 0.30,
       payoff = "put",
       option_type = "American")
#>  fair_value       delta        vega       theta         rho       gamma 
#>  12.2027075  -0.4469782  39.5313017  -6.2141979 -56.9005269  -0.1275472

## -----------------------------------------------------------------------------
# Implied volatility of an Asian call option with on an option price of 15, a
# share price of 100, an exercise_price of 100, a risk-free interest rate of
# 0.05 and a time to maturity of 1.

Implied_Volatility(option_price = 15, initial_price = 100,
                   exercise_price = 100, r = 0.05, time_to_maturity = 1,
                   option_type = "Asian", payoff = "call")

