//
//  main.cpp
//  Complex Calculator
//
//  Created by Алексей on 23.11.2020.
//

#include <iostream>
#include <ctime>
#include <math.h>
#include "mathematics.h"
using namespace std;

struct cnum {
    double Re;
    double Im;
} test;

int main() {
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    cout << "----------Colplex calculator v. 0.3----------" << endl << "Created by A.D. Konotop" << endl << "Tested by:" << endl << "   G.I. Pranovich (PC)" << endl << "   A.D. Konotop (Mac)" << endl << endl << "Released: 23 Nov 2020" << endl;
    cout << endl << "Current time and date: " << asctime(timeinfo) << endl;
    cout << "---------------------------------------------" << endl << endl;
    std::string oper;
    while (1) {
        cout << "Choose an operation: ";
        cin >> oper;
        if (oper == "expn" || oper == "root" || oper == "abs"){
            cout << endl << "Enter Real part: ";
            struct cnum cnum;
            cin >> cnum.Re;
            cout << "Enter Imagine part: ";
            cin >> cnum.Im;
            if (cnum.Im != 0 && cnum.Re != 0){
                cout << endl << "z = " << cnum.Re << " + i" << cnum.Im << endl << endl;
            }
            else if (cnum.Re == 0){
                cout << endl << "z = " << cnum.Re << endl << endl;
            }
            else if (cnum.Re == 0){
                cout << endl << "z = " << "i" << cnum.Im << endl << endl;
            }
            else{
                cout << "z = " << cnum.Re << endl << endl;
            }
            if (oper == "expn"){
                u_int g;
                cout << "Enter grade: ";
                cin >> g;
                expn(cnum.Re, cnum.Im, g);
            }
            else if (oper == "abs"){
                cout << "Abs(z) = " << sqrt (cnum.Re*cnum.Re + cnum.Im*cnum.Im) << endl;
            }
        }
        else if (oper == "+" || oper == "-" || oper == "*" || oper == "/"){
            
            cout << endl << "Enter first number:" << endl << "Enter Real part: ";
            struct cnum cNum1;
            cin >> cNum1.Re;
            cout << "Enter Imagine part: ";
            cin >> cNum1.Im;
            
            cout << endl << "Enter second number:" << endl << "Enter Real part: ";
            struct cnum cNum2;
            cin >> cNum2.Re;
            cout << "Enter Imagine part: ";
            cin >> cNum2.Im;
            
            if (cNum1.Im != 0 && cNum2.Re != 0){
                cout << endl << "Z1 " << oper << " Z2 = (" << cNum1.Re << " + i" << cNum1.Im;
            }
            else if (cNum1.Im == 0){
                cout << endl << "Z1 " << oper << " Z2 = (" << cNum1.Re;
            }
            else if (cNum1.Re == 0){
                cout << endl << "Z1 " << oper << " Z2 = (" << "i" << cNum1.Im;
            }
            else{
                cout << endl << "Z1 " << oper << " Z2 = (" << cNum1.Re;
            }
            if (cNum2.Im != 0 && cNum2.Re != 0){
                cout << ") " << oper << " (" << cNum2.Re << " + i" << cNum2.Im << ") = ";
            }
            else if (cNum2.Im == 0){
                cout << ") " << oper << " (" << cNum2.Re << ") = ";
            }
            else if (cNum2.Re == 0){
                cout << ") " << oper << " (" << "i" << cNum2.Im << ") = ";
            }
            else{
                cout << ") " << oper << " (" << cNum2.Re<< ") = ";
            }
            alg(cNum1.Re, cNum1.Im, oper, cNum2.Re, cNum2.Im);
        }
        if (oper == "help"){
            cout << endl << "---------------------------------------------" << endl;
            cout << "exit - stop calculations" << endl << "+ - summary" << endl << "- - differ" << endl << "* - product" << endl << "/ - divide" << endl << "abs - absolute z" << endl << "expn - exponentiation" << endl << "root - root - not exist yet" << endl;

        }
        cout << endl << "---------------------------------------------" << endl << endl;
        if (oper == "exit")
            break;
    }
    cout << endl << endl << "Shutting down..." << endl << endl;
    return 0;
}
