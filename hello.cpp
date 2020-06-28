/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  bu Ira Pohl - Second Edition                                                             */
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