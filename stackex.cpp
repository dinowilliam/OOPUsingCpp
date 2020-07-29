/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++ by Ira Pohl - Second Edition                                                              */
/*  Program: stackex.cpp                                                                                                            */
/************************************************************************************************************************************/

//stackex in C++ 
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

//Overloading the operator+.
class stack {

    public:
        explicit stack(int size = 1000) : max_len(size)
            { s = new TYPE[size]; top = EMPTY; }
        ~stack() { delete []s; }
        void reset() { top = EMPTY; }
        void push (TYPE c) { s[++top] = c; }
        TYPE pop() { return s[top--]; }
        TYPE top_of() { return s[top]; }
        bool empty() {  return (top == EMPTY); }
        bool full () {  return (top == max_len-l);  }

        //Reversing a series of char* represented strings
        void reverse(char* str[], int n){

            stack<char*> stk(n); //this stack holds char*
            for (int i = 0; i < n; ++i)
                stk.push(str[i]);

            for (int i = 0; i < n; ++i)
                str[i] = stk.pop();
        } 

        //Initializing stack of complex numbers from an array
        void init(complex<char> c[], stack<complex<char>>& stk, n){

            for (int i = 0; i < n; ++i)
                stk.push(c[i]);
        }
    
    private:
        enum {EMPTY = -1};
        TYPE* s;
        int max_len;
        int top;
};


//stacke constructor with exceptions
stack::stack(int n){
    if (n < 1)
        throw (n);          //want a positive value
    p = new char[n];        //create a stack of characters
    
    if (p == 0)             //new returns when it fails
        throw ("FREE STORE EXHAUSTED");

    top = EMPTY;
    max_len = n;    
}

void g(){

    try {
        stack a(n) , b(n);
    }
    catch (int n) { } //an incorrect size
    catch (char* error) { } //free store exhausted
}

int main(){

    

}
