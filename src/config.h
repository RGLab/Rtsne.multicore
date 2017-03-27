
#ifndef CONFIG_H
#define CONFIG_H

#ifdef ROUT

#include <Rcpp.h>
using namespace Rcpp;

#define COUT Rcout
#endif


#ifndef ROUT
#define COUT cout
#endif

#endif
