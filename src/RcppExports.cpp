// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// BootstrapIterKNMScores
NumericVector BootstrapIterKNMScores(NumericMatrix iterProbMat);
RcppExport SEXP svmSCORES_BootstrapIterKNMScores(SEXP iterProbMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type iterProbMat(iterProbMatSEXP);
    __result = Rcpp::wrap(BootstrapIterKNMScores(iterProbMat));
    return __result;
END_RCPP
}
