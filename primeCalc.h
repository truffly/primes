// primeCalc.h -- header to define the functions in primeCalc.cpp

#ifndef PRIMECALC_H
#define PRIMECALC_H

#include <stdbool.h>

void primeCalc(int dividend, int min, int max, bool print, bool log, bool log_p_num);
bool calcMethod(int dividend, int& count, int &factor);

#endif
