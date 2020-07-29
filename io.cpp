/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++ by Ira Pohl - Second Edition                                                              */
/*  Program: io.cpp                                                                                                            */
/************************************************************************************************************************************/

//io in C++ 
#include <iostream>        //IO library

using namespace std;      //standart library's namespace

int main(){
    
    int i ;
    double x;

    cout << "\nEnter a double (x): ";
    cin >> x;

    cout << "\nEnter a positive integer (i): ";
    cin >> i ;
    if (i < 1)
        cerr << "error i = " << i << endl ;

    cout << "i" << "("<< x <<")" << " * x" << "("<< i <<")" << " = " << i * x;
}