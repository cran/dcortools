% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/distcovsurv.R
\name{ipcw.dcov}
\alias{ipcw.dcov}
\title{Calculates an inverse-probability-of-censoring weighted (IPCW) distance covariance based on IPCW U-statistics \insertCite{datta2010inverse}{dcortools}.}
\usage{
ipcw.dcov(
  Y,
  X,
  affine = FALSE,
  standardize = FALSE,
  timetrafo = "none",
  type.X = "sample",
  metr.X = "euclidean",
  use = "all",
  cutoff = NULL
)
}
\arguments{
\item{Y}{A column with two rows, where the first row contains the survival times and the second row the status indicators (a survival object will work).}

\item{X}{A vector or matrix containing the covariate information.}

\item{affine}{logical; indicates if X should be transformed such that the result is invariant under affine transformations of X}

\item{standardize}{logical; should X be standardized using the standard deviations of single observations?. No effect when affine = TRUE.}

\item{timetrafo}{specifies a transformation applied on the follow-up times. Can be "none", "log" or a user-specified function.}

\item{type.X}{For "distance", X is interpreted as a distance matrix. For "sample" (or any other value), X is interpreted as a sample}

\item{metr.X}{metr.X specifies the metric which should be used for X to analyze the distance covariance. Options are "euclidean", "discrete", "alpha", "minkowski", "gaussian", "gaussauto" and "boundsq". For "alpha", "minkowski", "gauss", "gaussauto" and "boundsq", the corresponding parameters are specified via "c(metric,parameter)" (see examples); the standard parameter is 2 for "minkowski" and "1" for all other metrics.}

\item{use}{specifies how to treat missing values. "complete.obs" excludes observations containing NAs, "all" uses all observations.}

\item{cutoff}{If provided, all survival times larger than cutoff are set to the cutoff and all corresponding status indicators are set to one. Under most circumstances, choosing a cutoff is highly recommended.}
}
\value{
An inverse-probability of censoring weighted estimate for the distance covariance between X and the survival times.
}
\description{
Calculates an inverse-probability-of-censoring weighted (IPCW) distance covariance based on IPCW U-statistics \insertCite{datta2010inverse}{dcortools}.
}
\examples{
X <- rnorm(100)
survtime <- rgamma(100, abs(X))
cens <- rexp(100)
status <- as.numeric(survtime < cens)
time <- sapply(1:100, function(u) min(survtime[u], cens[u]))
surv <- cbind(time, status)
ipcw.dcov(surv, X)
}
\references{
\insertRef{bottcher2017detecting}{dcortools}

\insertRef{datta2010inverse}{dcortools}

\insertRef{dueck2014affinely}{dcortools}

\insertRef{huo2016fast}{dcortools}

\insertRef{lyons2013distance}{dcortools}

\insertRef{sejdinovic2013equivalence}{dcortools}

\insertRef{szekely2007}{dcortools}

\insertRef{szekely2009brownian}{dcortools}
}
