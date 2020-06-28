/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++  by Ira Pohl - Second Edition                                                             */
/*  Program: string2.cpp                                                                                                             */
/************************************************************************************************************************************/

//string2 in C++
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

class my_string {
    public:         
        
        //constructor
        explicit my_string(int n) { 
            s = new char[n + 1] ; 
            len = n;
        }

        //constructor overload
        explicit my_string(const char* p){
            len = strlen(p);
            s = new char[len + 1] ;
            strcpy(s, p);
        }

        //constructor overload no arguments
        explicit my_string() { 
            len = 0; 
            s = new char[1]; 
        }

        void assign(const char* str);           
        int length() const { return len; }
        void print () const {   cout << s << "\nLength: " << len << endl;    }        
        
         //Add as a member function to class my_string.
        ~my_string() { delete []s; } //destructor     

    private:        //restricted access to implementation
        char* s;
        int len;                      
};

//Test of the class my_string.
int main(){
    my_string a, b(10), c("I Came by horse");    

    char* str = "I came on foot.";
    my_string d("I came by bus."), e(str);        
        
    b.assign(str);
    
    cout << "The str Variable: " << str;
    cout << "\nLength: " << strlen(str) << endl;
    
    //print the shorter of one and two
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
}

// Method assign of my_string definition
 void my_string::assign(const char* str){           
    delete []s;
    len = strlen(str);           
    s = new char[len + 1];
    strcpy(s, str);        
};       