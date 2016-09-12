// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// qubic_d
List qubic_d(const IntegerMatrix matrix, const double c, const int o, const double f, const int k, const bool P, const bool S, const bool C, const bool verbose);
RcppExport SEXP QUBIC_qubic_d(SEXP matrixSEXP, SEXP cSEXP, SEXP oSEXP, SEXP fSEXP, SEXP kSEXP, SEXP PSEXP, SEXP SSEXP, SEXP CSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< const double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int >::type o(oSEXP);
    Rcpp::traits::input_parameter< const double >::type f(fSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type P(PSEXP);
    Rcpp::traits::input_parameter< const bool >::type S(SSEXP);
    Rcpp::traits::input_parameter< const bool >::type C(CSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(qubic_d(matrix, c, o, f, k, P, S, C, verbose));
    return __result;
END_RCPP
}
// qubic_de
List qubic_de(const IntegerMatrix matrix, const double c, const bool verbose, const LogicalMatrix RowxNumber, const LogicalMatrix NumberxCol);
RcppExport SEXP QUBIC_qubic_de(SEXP matrixSEXP, SEXP cSEXP, SEXP verboseSEXP, SEXP RowxNumberSEXP, SEXP NumberxColSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< const double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix >::type RowxNumber(RowxNumberSEXP);
    Rcpp::traits::input_parameter< const LogicalMatrix >::type NumberxCol(NumberxColSEXP);
    __result = Rcpp::wrap(qubic_de(matrix, c, verbose, RowxNumber, NumberxCol));
    return __result;
END_RCPP
}
// qubic_dw
List qubic_dw(const IntegerMatrix matrix, const double c, const int o, const double f, const int k, const bool P, const bool S, const bool C, const bool verbose, const arma::sp_mat weight);
RcppExport SEXP QUBIC_qubic_dw(SEXP matrixSEXP, SEXP cSEXP, SEXP oSEXP, SEXP fSEXP, SEXP kSEXP, SEXP PSEXP, SEXP SSEXP, SEXP CSEXP, SEXP verboseSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< const double >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int >::type o(oSEXP);
    Rcpp::traits::input_parameter< const double >::type f(fSEXP);
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const bool >::type P(PSEXP);
    Rcpp::traits::input_parameter< const bool >::type S(SSEXP);
    Rcpp::traits::input_parameter< const bool >::type C(CSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type weight(weightSEXP);
    __result = Rcpp::wrap(qubic_dw(matrix, c, o, f, k, P, S, C, verbose, weight));
    return __result;
END_RCPP
}
// qudiscretize
NumericMatrix qudiscretize(const NumericMatrix x, const short r, const double q);
RcppExport SEXP QUBIC_qudiscretize(SEXP xSEXP, SEXP rSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const short >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    __result = Rcpp::wrap(qudiscretize(x, r, q));
    return __result;
END_RCPP
}
