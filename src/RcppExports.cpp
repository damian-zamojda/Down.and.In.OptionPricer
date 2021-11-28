// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CallDownAndInPrice
double CallDownAndInPrice(int nInt_, double Strike_, double Spot_, double Vol_, double r_, double Expiry_, double barrier_);
RcppExport SEXP _Down_and_In_OptionPricer_CallDownAndInPrice(SEXP nInt_SEXP, SEXP Strike_SEXP, SEXP Spot_SEXP, SEXP Vol_SEXP, SEXP r_SEXP, SEXP Expiry_SEXP, SEXP barrier_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt_(nInt_SEXP);
    Rcpp::traits::input_parameter< double >::type Strike_(Strike_SEXP);
    Rcpp::traits::input_parameter< double >::type Spot_(Spot_SEXP);
    Rcpp::traits::input_parameter< double >::type Vol_(Vol_SEXP);
    Rcpp::traits::input_parameter< double >::type r_(r_SEXP);
    Rcpp::traits::input_parameter< double >::type Expiry_(Expiry_SEXP);
    Rcpp::traits::input_parameter< double >::type barrier_(barrier_SEXP);
    rcpp_result_gen = Rcpp::wrap(CallDownAndInPrice(nInt_, Strike_, Spot_, Vol_, r_, Expiry_, barrier_));
    return rcpp_result_gen;
END_RCPP
}
// PutDownAndInPrice
double PutDownAndInPrice(int nInt_, double Strike_, double Spot_, double Vol_, double r_, double Expiry_, double barrier_);
RcppExport SEXP _Down_and_In_OptionPricer_PutDownAndInPrice(SEXP nInt_SEXP, SEXP Strike_SEXP, SEXP Spot_SEXP, SEXP Vol_SEXP, SEXP r_SEXP, SEXP Expiry_SEXP, SEXP barrier_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt_(nInt_SEXP);
    Rcpp::traits::input_parameter< double >::type Strike_(Strike_SEXP);
    Rcpp::traits::input_parameter< double >::type Spot_(Spot_SEXP);
    Rcpp::traits::input_parameter< double >::type Vol_(Vol_SEXP);
    Rcpp::traits::input_parameter< double >::type r_(r_SEXP);
    Rcpp::traits::input_parameter< double >::type Expiry_(Expiry_SEXP);
    Rcpp::traits::input_parameter< double >::type barrier_(barrier_SEXP);
    rcpp_result_gen = Rcpp::wrap(PutDownAndInPrice(nInt_, Strike_, Spot_, Vol_, r_, Expiry_, barrier_));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _Down_and_In_OptionPricer_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Down_and_In_OptionPricer_CallDownAndInPrice", (DL_FUNC) &_Down_and_In_OptionPricer_CallDownAndInPrice, 7},
    {"_Down_and_In_OptionPricer_PutDownAndInPrice", (DL_FUNC) &_Down_and_In_OptionPricer_PutDownAndInPrice, 7},
    {"_Down_and_In_OptionPricer_rcpp_hello_world", (DL_FUNC) &_Down_and_In_OptionPricer_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_Down_and_In_OptionPricer(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}