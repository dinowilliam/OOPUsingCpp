/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  by Ira Pohl - Second Edition                                                             */
/*  Program: tstack.cpp                                                                                                             */
/************************************************************************************************************************************/

//tstack in C++
#include <iostream>        //IO library
#include <string>          //string stype
#include <complex>         //string complex type

using namespace std;      //standart library's namespace

//Overloading the operator+.
template <class TYPE>
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

stack<char> stk_ch; // 1000 char stack
stack<char*> stk_str(200); // 200 char- stack
stack<complex<char>> stk_cmplx(100); // 100 complex stack

int main(){
    
}