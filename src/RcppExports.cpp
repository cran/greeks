// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Binomial_American_Greeks_cpp
NumericVector Binomial_American_Greeks_cpp(double initial_price, double exercise_price, double r, double time_to_maturity, double volatility, double dividend_yield, std::string payoff, const int steps);
RcppExport SEXP _greeks_Binomial_American_Greeks_cpp(SEXP initial_priceSEXP, SEXP exercise_priceSEXP, SEXP rSEXP, SEXP time_to_maturitySEXP, SEXP volatilitySEXP, SEXP dividend_yieldSEXP, SEXP payoffSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type initial_price(initial_priceSEXP);
    Rcpp::traits::input_parameter< double >::type exercise_price(exercise_priceSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type time_to_maturity(time_to_maturitySEXP);
    Rcpp::traits::input_parameter< double >::type volatility(volatilitySEXP);
    Rcpp::traits::input_parameter< double >::type dividend_yield(dividend_yieldSEXP);
    Rcpp::traits::input_parameter< std::string >::type payoff(payoffSEXP);
    Rcpp::traits::input_parameter< const int >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(Binomial_American_Greeks_cpp(initial_price, exercise_price, r, time_to_maturity, volatility, dividend_yield, payoff, steps));
    return rcpp_result_gen;
END_RCPP
}
// calc_I
NumericVector calc_I(NumericMatrix X, int steps, float dt);
RcppExport SEXP _greeks_calc_I(SEXP XSEXP, SEXP stepsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_I(X, steps, dt));
    return rcpp_result_gen;
END_RCPP
}
// calc_I_1
NumericVector calc_I_1(NumericMatrix X, int steps, float dt);
RcppExport SEXP _greeks_calc_I_1(SEXP XSEXP, SEXP stepsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_I_1(X, steps, dt));
    return rcpp_result_gen;
END_RCPP
}
// calc_I_2
NumericVector calc_I_2(NumericMatrix X, int steps, float dt);
RcppExport SEXP _greeks_calc_I_2(SEXP XSEXP, SEXP stepsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_I_2(X, steps, dt));
    return rcpp_result_gen;
END_RCPP
}
// calc_I_3
NumericVector calc_I_3(NumericMatrix X, int steps, float dt);
RcppExport SEXP _greeks_calc_I_3(SEXP XSEXP, SEXP stepsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_I_3(X, steps, dt));
    return rcpp_result_gen;
END_RCPP
}
// calc_X
NumericVector calc_X(NumericMatrix W, float dt, float volatility, float r);
RcppExport SEXP _greeks_calc_X(SEXP WSEXP, SEXP dtSEXP, SEXP volatilitySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< float >::type volatility(volatilitySEXP);
    Rcpp::traits::input_parameter< float >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_X(W, dt, volatility, r));
    return rcpp_result_gen;
END_RCPP
}
// calc_XW
NumericVector calc_XW(NumericMatrix X, NumericMatrix W, int steps, int paths, float dt);
RcppExport SEXP _greeks_calc_XW(SEXP XSEXP, SEXP WSEXP, SEXP stepsSEXP, SEXP pathsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< int >::type paths(pathsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_XW(X, W, steps, paths, dt));
    return rcpp_result_gen;
END_RCPP
}
// calc_log_X
NumericVector calc_log_X(NumericMatrix W, float dt, float volatility, float r);
RcppExport SEXP _greeks_calc_log_X(SEXP WSEXP, SEXP dtSEXP, SEXP volatilitySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< float >::type volatility(volatilitySEXP);
    Rcpp::traits::input_parameter< float >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_log_X(W, dt, volatility, r));
    return rcpp_result_gen;
END_RCPP
}
// calc_tXW
NumericVector calc_tXW(NumericMatrix X, NumericMatrix W, int steps, int paths, float dt);
RcppExport SEXP _greeks_calc_tXW(SEXP XSEXP, SEXP WSEXP, SEXP stepsSEXP, SEXP pathsSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< int >::type paths(pathsSEXP);
    Rcpp::traits::input_parameter< float >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_tXW(X, W, steps, paths, dt));
    return rcpp_result_gen;
END_RCPP
}
// make_BM
NumericMatrix make_BM(NumericVector v, int steps, int paths);
RcppExport SEXP _greeks_make_BM(SEXP vSEXP, SEXP stepsSEXP, SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< int >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(make_BM(v, steps, paths));
    return rcpp_result_gen;
END_RCPP
}
// rowCumsums
NumericMatrix rowCumsums(NumericMatrix m);
RcppExport SEXP _greeks_rowCumsums(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rowCumsums(m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_greeks_Binomial_American_Greeks_cpp", (DL_FUNC) &_greeks_Binomial_American_Greeks_cpp, 8},
    {"_greeks_calc_I", (DL_FUNC) &_greeks_calc_I, 3},
    {"_greeks_calc_I_1", (DL_FUNC) &_greeks_calc_I_1, 3},
    {"_greeks_calc_I_2", (DL_FUNC) &_greeks_calc_I_2, 3},
    {"_greeks_calc_I_3", (DL_FUNC) &_greeks_calc_I_3, 3},
    {"_greeks_calc_X", (DL_FUNC) &_greeks_calc_X, 4},
    {"_greeks_calc_XW", (DL_FUNC) &_greeks_calc_XW, 5},
    {"_greeks_calc_log_X", (DL_FUNC) &_greeks_calc_log_X, 4},
    {"_greeks_calc_tXW", (DL_FUNC) &_greeks_calc_tXW, 5},
    {"_greeks_make_BM", (DL_FUNC) &_greeks_make_BM, 3},
    {"_greeks_rowCumsums", (DL_FUNC) &_greeks_rowCumsums, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_greeks(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
