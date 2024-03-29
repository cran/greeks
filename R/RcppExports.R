# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

Binomial_American_Greeks_cpp <- function(initial_price = 100, exercise_price = 100, r = 0, time_to_maturity = 1, volatility = 0.3, dividend_yield = 0, payoff = "call", steps = 1000L) {
    .Call(`_greeks_Binomial_American_Greeks_cpp`, initial_price, exercise_price, r, time_to_maturity, volatility, dividend_yield, payoff, steps)
}

calc_I <- function(X, steps, dt) {
    .Call(`_greeks_calc_I`, X, steps, dt)
}

calc_I_1 <- function(X, steps, dt) {
    .Call(`_greeks_calc_I_1`, X, steps, dt)
}

calc_I_2 <- function(X, steps, dt) {
    .Call(`_greeks_calc_I_2`, X, steps, dt)
}

calc_I_3 <- function(X, steps, dt) {
    .Call(`_greeks_calc_I_3`, X, steps, dt)
}

calc_X <- function(W, dt, volatility, r) {
    .Call(`_greeks_calc_X`, W, dt, volatility, r)
}

calc_XW <- function(X, W, steps, paths, dt) {
    .Call(`_greeks_calc_XW`, X, W, steps, paths, dt)
}

calc_log_X <- function(W, dt, volatility, r) {
    .Call(`_greeks_calc_log_X`, W, dt, volatility, r)
}

calc_tXW <- function(X, W, steps, paths, dt) {
    .Call(`_greeks_calc_tXW`, X, W, steps, paths, dt)
}

make_BM <- function(v, steps, paths) {
    .Call(`_greeks_make_BM`, v, steps, paths)
}

rowCumsums <- function(m) {
    .Call(`_greeks_rowCumsums`, m)
}

