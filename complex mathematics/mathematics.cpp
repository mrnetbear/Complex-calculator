//
//  mathematics.cpp
//  Complex Calculator
//
//  Created by Алексей on 29.12.2020.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

typedef unsigned int u_int;

void expn(double a, double b, u_int g){
    double r = sqrt(a*a+b*b);
    double c = acos(a/r);
    cout << "z^" << g << " = ";
    double m = r;
    for (int i = 1; i <g; i++){
        r*=m;
    }
    if ((a/m) == 1){
        cout << r << endl;
    }
    else if ((a/m) == 0.5 && b>0){
        cout << r << "*exp(i[" << g << "п" << "/3" << "])" << endl;
    }
    else if ((a/m) == sqrt(3)/2 && b>0){
        cout << r << "*exp(i[" << g << "п" << "/6" << "])" << endl;
    }
    else if ((a/m) == 1/sqrt(2) && b>0){
        cout << r << "*exp(i[" << g << "п" << "/4" << "])" << endl;
    }
    else if (a/m == 0 && b>0){
        cout << r << "*exp(i[" << g << "п" << "/2" << "])" << endl;
    }
    else if ((a/m) == -1){
        cout << r << endl;
    }
    else if ((a/m) == -0.5 && b>0){
        cout << r << "*exp(i[" << g*2 << "п" << "/3" << "])" << endl;
    }
    else if ((a/m) == -sqrt(3)/2 && b>0){
        cout << r << "*exp(i[" << g*5 << "п" << "/6" << "])" << endl;
    }
    else if ((a/m) == -1/sqrt(2) && b>0){
        cout << r << "*exp(i[" << g*3 << "п" << "/4" << "])" << endl;
    }
    else if ((a/m) == 0.5 && b<0){
        cout << r << "*exp(i[-" << (g) << "п" << "/3" << "])" << endl;
    }
    else if ((a/m) == sqrt(3)/2 && b<0){
        cout << r << "*exp(i[-" << (g) << "п" << "/6" << "])" << endl;
    }
    else if ((a/m) == 1/sqrt(2) && b<0){
        cout << r << "*exp(i[-" << (g) << "п" << "/4" << "])" << endl;
    }
    else if (a/m == 0 && b<0){
        cout << r << "*exp(i[-" << (g) << "п" << "/2" << "])" << endl;
    }
    else if ((a/m) == -0.5 && b<0){
        cout << r << "*exp(i[-" << (2*g) << "п" << "/3" << "])" << endl;
    }
    else if ((a/m) == -sqrt(3)/2 && b<0){
        cout << r << "*exp(i[-" << (5*g) << "п" << "/6" << "])" << endl;
    }
    else if ((a/m) == -1/sqrt(2) && b<0){
        cout << r << "*exp(i[-" << (3*g) << "п" << "/4" << "])" << endl;
    }
    else if (b>0){
        cout << r << "*exp(i[" << c*g << "])" << endl;
    }
    else if (b<0){
        cout << r << "*exp(i[-" << (c*g) << "])" << endl;
    }
}

void alg (double x1, double y1, std::string oper, double x2, double y2){
    if (oper == "+"){
        cout << "(" << x1+x2 << " + i" << y1+y2 << ")" << endl;
    }
    if (oper == "-"){
        cout << "(" << x1-x2 << " + i" << y1-y2 << ")" << endl;
    }
    if (oper == "*"){
        cout << "(" << x1*x2-y1*y2 << " + i" << x1*y2+x2*y1 << ")" << endl;
    }
    if (oper == "/"){
        cout << "(" << x1*x2/(x2*x2+y2*y2) + y1*y2/(x2*x2+y2*y2) << " + i" << (x1*y2-x2*y1)/(x2*x2+y2*y2) << ")" << endl;
    }
}

void root(double Re, double Im, u_int expn){
    double r = sqrt(Re*Re + Im*Im);
    double corn = acos(Re/r);
    r = pow(r, 1/expn);
    corn = corn/expn;
    cout << "z = " << r << " * exp[i * (" << corn << " + 2пn/" << expn << ")], n in range 0.." << expn - 1 << endl;
}
void print(double Re, double Im){
    ;
}
