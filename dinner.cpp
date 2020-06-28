/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  bu Ira Pohl - Second Edition                                                             */
/*  Program: dinner.cpp                                                                                                              */
/************************************************************************************************************************************/

//dinner in C++
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

inline void pr_message(string s = "Hello world!")
{        cout << s << endl;     }

int main(){
    pr_message();
    pr_message("Laura Pohl");
    pr_message("It's is dinner time.");
}