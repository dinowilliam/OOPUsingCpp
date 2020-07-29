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

   int x, y, g;

    cout << "\nPROGRAM Gcd C++";
    do {

        cout << "\nEnter two integers: ";
        cin >> x >> y;
        assert(x * y != 0);             //precondition on gcd

        cout << "\nGCD(" << x << ", " << y << ") = "
             << (g = gcd(x, y)) << endl;

        assert(x % g == 0 && y % g == 0); //postcondition

    } while (x != y);

}