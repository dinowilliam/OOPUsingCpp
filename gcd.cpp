/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++ by Ira Pohl - Second Edition                                                              */
/*  Program: gcd.cpp                                                                                                            */
/************************************************************************************************************************************/

//gcd in C++ 
#include <iostream>        //IO library
#include <assert.h>

using namespace std;      //standart library's namespace

//Greatest common divisor program.

int gcd(int m, int n)   //function definition
{                       //block
    int r;              //declaration of remainder
    while (n != 0) {    //not equal
        r = m % n;      //modulo operator
        m = n;          //assignment
        n = r;
    }                   //end while loop

    return m;           //exit gcd with value m
}

int main(){

    cout << "Gcd Value Is: " << gcd(10, 23) << endl;
    
}