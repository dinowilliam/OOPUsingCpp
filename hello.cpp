/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  by Ira Pohl - Second Edition                                                             */
/*  Program: hello.cpp                                                                                                              */
/************************************************************************************************************************************/

//Hello world in C++
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

inline void pr_message(string s = "Hello world!")
{        cout << s << endl;     }

int main(){
    pr_message();
}