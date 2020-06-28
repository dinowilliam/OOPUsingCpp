/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  bu Ira Pohl - Second Edition                                                             */
/*  Program: string1.cpp                                                                                                             */
/************************************************************************************************************************************/

//dinner in C++
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

//An elementary implementation of type my_string.
const int max_len = 255;

class my_string {
    public:         //universal access to interface
        void assign(const char* st);
        int length() const { return len; }
        void print () const {   cout << s << "\nl_ength: " << len << endl;    }
    private:        //restricted access to implementation
        char s[max_len];
        int len;
};

//Test of the class my_string.

int main(){
    my_string one, two;
    char    three[40] = {"My name is Charles Babbage."};

    one.assign("My name is Alan Turing.");
    two.assign(three) ;
    cout << three;
    cout << "\nLength: " << strlen(three) << endl;
    //print the shorter of one and two
    if (one.length() <= two.length())
        one.print() ;
    else
        two.print() ;
}