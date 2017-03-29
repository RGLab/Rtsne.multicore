
#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
using namespace std;

#ifdef ROUT

#include <Rcpp.h>
using namespace Rcpp;

#define PRINT Rprintf
#endif


#ifndef ROUT
#define PRINT printf
#endif

#endif
