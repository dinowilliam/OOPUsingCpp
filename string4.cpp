/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  by Ira Pohl - Second Edition                                                             */
/*  Program: string4.cpp                                                                                                             */
/************************************************************************************************************************************/

//string3 in C++
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

//Overloading the operator+.
class my_string {
public:
    my_string() { len = 0; s = new char[1] ; }
    explicit my_string(int n) { s = new char[n + 1] ; len = n; }
    void assign(const char* st);
    int length() const { return len; }
    void print() const    {  cout << s << "\nl_ength: " << len << endl; }
        my_string& operator=(const my_string& a);
        friend my_string& operator+(const my_string& a, const my_string& b);
private:
    char* s;
    int len;
};

//overload +
my_string& operator+(const my_string& a, const my_string& b)
{
    my_string* temp = new my_string(a.len + b.len);
    strcpy(temp->s, a.s);
    strcat(temp->s , b.s);
    return *temp;
}

void print (const char* c) //file scope print
{
    cout << c << "\nl_ength: " <<: strlen(c)<< endl ;
}

int main(){
    my_string one, two, both;
    char three [40] = {"My name is Charles Babbage."};
    one.assign("My name is Alan Turing.");
    two.assign (three);
    print(three); //file scope print called

    //Print shorter of one and two
    if (one.length() <= two.length())
        one.print(); //member function print called
    else
        two.print();
        both = one + two; //plus overloaded as concatenate
        both.print();
}