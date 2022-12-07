// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dcortools_types.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// squaresym
Eigen::MatrixXd squaresym(Eigen::MatrixXd A);
RcppExport SEXP _dcortools_squaresym(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(squaresym(A));
    return rcpp_result_gen;
END_RCPP
}
// normalize_matrix
NumericMatrix normalize_matrix(NumericMatrix& M, NumericVector& cmM, double& mM);
RcppExport SEXP _dcortools_normalize_matrix(SEXP MSEXP, SEXP cmMSEXP, SEXP mMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type cmM(cmMSEXP);
    Rcpp::traits::input_parameter< double& >::type mM(mMSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_matrix(M, cmM, mM));
    return rcpp_result_gen;
END_RCPP
}
// hadamard_product
NumericMatrix hadamard_product(NumericMatrix& X, NumericMatrix& Y);
RcppExport SEXP _dcortools_hadamard_product(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(hadamard_product(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// matrix_prod_sum2
double matrix_prod_sum2(NumericMatrix& X, NumericMatrix& Y);
RcppExport SEXP _dcortools_matrix_prod_sum2(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_prod_sum2(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// sum_hadamard_power2
double sum_hadamard_power2(NumericMatrix& X);
RcppExport SEXP _dcortools_sum_hadamard_power2(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_hadamard_power2(X));
    return rcpp_result_gen;
END_RCPP
}
// sum_hadamard_power3
double sum_hadamard_power3(NumericMatrix& X);
RcppExport SEXP _dcortools_sum_hadamard_power3(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_hadamard_power3(X));
    return rcpp_result_gen;
END_RCPP
}
// vector_product
NumericVector vector_product(NumericVector& X, NumericVector& Y);
RcppExport SEXP _dcortools_vector_product(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(vector_product(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// matrix_prod_sum
double matrix_prod_sum(NumericMatrix& X, NumericMatrix& Y);
RcppExport SEXP _dcortools_matrix_prod_sum(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_prod_sum(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// vector_prod_sum
double vector_prod_sum(NumericVector& X, NumericVector& Y);
RcppExport SEXP _dcortools_vector_prod_sum(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(vector_prod_sum(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// specific_vector_prod_sum
double specific_vector_prod_sum(NumericVector& X, NumericVector& Y, NumericVector& gamma_1, NumericVector& gamma_X, NumericVector& gamma_Y, NumericVector& gamma_XY);
RcppExport SEXP _dcortools_specific_vector_prod_sum(SEXP XSEXP, SEXP YSEXP, SEXP gamma_1SEXP, SEXP gamma_XSEXP, SEXP gamma_YSEXP, SEXP gamma_XYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gamma_1(gamma_1SEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gamma_X(gamma_XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gamma_Y(gamma_YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type gamma_XY(gamma_XYSEXP);
    rcpp_result_gen = Rcpp::wrap(specific_vector_prod_sum(X, Y, gamma_1, gamma_X, gamma_Y, gamma_XY));
    return rcpp_result_gen;
END_RCPP
}
// matrix_sum
double matrix_sum(NumericMatrix& X);
RcppExport SEXP _dcortools_matrix_sum(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_sum(X));
    return rcpp_result_gen;
END_RCPP
}
// matrix_prod_sum_sample
double matrix_prod_sum_sample(const NumericMatrix X, const NumericMatrix Y, const IntegerVector s);
RcppExport SEXP _dcortools_matrix_prod_sum_sample(SEXP XSEXP, SEXP YSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_prod_sum_sample(X, Y, s));
    return rcpp_result_gen;
END_RCPP
}
// matrix_prod_sum_subset
double matrix_prod_sum_subset(const NumericMatrix X, const NumericMatrix Y, const IntegerVector s);
RcppExport SEXP _dcortools_matrix_prod_sum_subset(SEXP XSEXP, SEXP YSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_prod_sum_subset(X, Y, s));
    return rcpp_result_gen;
END_RCPP
}
// colsums_subset
NumericVector colsums_subset(const NumericMatrix X, const IntegerVector s);
RcppExport SEXP _dcortools_colsums_subset(SEXP XSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(colsums_subset(X, s));
    return rcpp_result_gen;
END_RCPP
}
// vector_prod_sum_sample
double vector_prod_sum_sample(const NumericVector X, const NumericVector Y, const IntegerVector s);
RcppExport SEXP _dcortools_vector_prod_sum_sample(SEXP XSEXP, SEXP YSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(vector_prod_sum_sample(X, Y, s));
    return rcpp_result_gen;
END_RCPP
}
// dcovtermsmemvec
List dcovtermsmemvec(NumericVector& X, NumericVector& Y, std::string& metrX, std::string& metrY, double prmX, double prmY, bool calcdcor, bool calcperm);
RcppExport SEXP _dcortools_dcovtermsmemvec(SEXP XSEXP, SEXP YSEXP, SEXP metrXSEXP, SEXP metrYSEXP, SEXP prmXSEXP, SEXP prmYSEXP, SEXP calcdcorSEXP, SEXP calcpermSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrY(metrYSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    Rcpp::traits::input_parameter< double >::type prmY(prmYSEXP);
    Rcpp::traits::input_parameter< bool >::type calcdcor(calcdcorSEXP);
    Rcpp::traits::input_parameter< bool >::type calcperm(calcpermSEXP);
    rcpp_result_gen = Rcpp::wrap(dcovtermsmemvec(X, Y, metrX, metrY, prmX, prmY, calcdcor, calcperm));
    return rcpp_result_gen;
END_RCPP
}
// dcovtermsmem
List dcovtermsmem(NumericMatrix& X, NumericMatrix& Y, std::string& metrX, std::string& metrY, double prmX, double prmY, bool calcdcor, bool calcperm);
RcppExport SEXP _dcortools_dcovtermsmem(SEXP XSEXP, SEXP YSEXP, SEXP metrXSEXP, SEXP metrYSEXP, SEXP prmXSEXP, SEXP prmYSEXP, SEXP calcdcorSEXP, SEXP calcpermSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrY(metrYSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    Rcpp::traits::input_parameter< double >::type prmY(prmYSEXP);
    Rcpp::traits::input_parameter< bool >::type calcdcor(calcdcorSEXP);
    Rcpp::traits::input_parameter< bool >::type calcperm(calcpermSEXP);
    rcpp_result_gen = Rcpp::wrap(dcovtermsmem(X, Y, metrX, metrY, prmX, prmY, calcdcor, calcperm));
    return rcpp_result_gen;
END_RCPP
}
// dvartermsmemvec
List dvartermsmemvec(NumericVector& X, std::string& metrX, double prmX);
RcppExport SEXP _dcortools_dvartermsmemvec(SEXP XSEXP, SEXP metrXSEXP, SEXP prmXSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    rcpp_result_gen = Rcpp::wrap(dvartermsmemvec(X, metrX, prmX));
    return rcpp_result_gen;
END_RCPP
}
// dvartermsmem
List dvartermsmem(NumericMatrix& X, std::string& metrX, double prmX);
RcppExport SEXP _dcortools_dvartermsmem(SEXP XSEXP, SEXP metrXSEXP, SEXP prmXSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    rcpp_result_gen = Rcpp::wrap(dvartermsmem(X, metrX, prmX));
    return rcpp_result_gen;
END_RCPP
}
// aijbijmemvec
double aijbijmemvec(NumericVector& X, NumericVector& Y, std::string& metrX, std::string& metrY, double prmX, double prmY);
RcppExport SEXP _dcortools_aijbijmemvec(SEXP XSEXP, SEXP YSEXP, SEXP metrXSEXP, SEXP metrYSEXP, SEXP prmXSEXP, SEXP prmYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrY(metrYSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    Rcpp::traits::input_parameter< double >::type prmY(prmYSEXP);
    rcpp_result_gen = Rcpp::wrap(aijbijmemvec(X, Y, metrX, metrY, prmX, prmY));
    return rcpp_result_gen;
END_RCPP
}
// aijbijmem
double aijbijmem(NumericMatrix& X, NumericMatrix& Y, std::string& metrX, std::string& metrY, double prmX, double prmY);
RcppExport SEXP _dcortools_aijbijmem(SEXP XSEXP, SEXP YSEXP, SEXP metrXSEXP, SEXP metrYSEXP, SEXP prmXSEXP, SEXP prmYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrX(metrXSEXP);
    Rcpp::traits::input_parameter< std::string& >::type metrY(metrYSEXP);
    Rcpp::traits::input_parameter< double >::type prmX(prmXSEXP);
    Rcpp::traits::input_parameter< double >::type prmY(prmYSEXP);
    rcpp_result_gen = Rcpp::wrap(aijbijmem(X, Y, metrX, metrY, prmX, prmY));
    return rcpp_result_gen;
END_RCPP
}
// SUMAIJBIJ
double SUMAIJBIJ(IntegerVector& IY, NumericVector& X, NumericVector& Y, NumericVector& XY, NumericVector& SX_X, NumericVector& SX_Y, NumericVector& SX_XY, NumericVector& SY_X, NumericVector& SY_Y, NumericVector& SY_XY);
RcppExport SEXP _dcortools_SUMAIJBIJ(SEXP IYSEXP, SEXP XSEXP, SEXP YSEXP, SEXP XYSEXP, SEXP SX_XSEXP, SEXP SX_YSEXP, SEXP SX_XYSEXP, SEXP SY_XSEXP, SEXP SY_YSEXP, SEXP SY_XYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type IY(IYSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type XY(XYSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SX_X(SX_XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SX_Y(SX_YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SX_XY(SX_XYSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SY_X(SY_XSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SY_Y(SY_YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type SY_XY(SY_XYSEXP);
    rcpp_result_gen = Rcpp::wrap(SUMAIJBIJ(IY, X, Y, XY, SX_X, SX_Y, SX_XY, SY_X, SY_Y, SY_XY));
    return rcpp_result_gen;
END_RCPP
}
