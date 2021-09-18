//
//  mathematics.h
//  Complex Calculator
//
//  Created by Алексей on 26.11.2020.
//

#ifndef mathematics_h
#define mathematics_h
#include <math.h>
using namespace std;

typedef unsigned int u_int;

void expn(double a, double b, u_int g);
void alg(double x1, double y1, std::string oper, double x2, double y2);
void print(double Re, double Im);
void root(double Re, double Im, u_int expn);
#endif /* mathematics_h */
