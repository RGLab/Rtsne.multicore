// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Rtsne_cpp
Rcpp::List Rtsne_cpp(NumericMatrix X, int no_dims_in, double perplexity_in, double theta_in, int num_threads, int max_iter, bool distance_precomputed);
RcppExport SEXP _Rtsne_multicore_Rtsne_cpp(SEXP XSEXP, SEXP no_dims_inSEXP, SEXP perplexity_inSEXP, SEXP theta_inSEXP, SEXP num_threadsSEXP, SEXP max_iterSEXP, SEXP distance_precomputedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type no_dims_in(no_dims_inSEXP);
    Rcpp::traits::input_parameter< double >::type perplexity_in(perplexity_inSEXP);
    Rcpp::traits::input_parameter< double >::type theta_in(theta_inSEXP);
    Rcpp::traits::input_parameter< int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type distance_precomputed(distance_precomputedSEXP);
    rcpp_result_gen = Rcpp::wrap(Rtsne_cpp(X, no_dims_in, perplexity_in, theta_in, num_threads, max_iter, distance_precomputed));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rtsne_multicore_Rtsne_cpp", (DL_FUNC) &_Rtsne_multicore_Rtsne_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rtsne_multicore(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
