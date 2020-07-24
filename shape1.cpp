/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++ by Ira Pohl - Second Edition                                                              */
/*  Program: personex.cpp                                                                                                           */
/************************************************************************************************************************************/

//personex in C++ (This is the program from the picture model of class person inheritance)
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

class shape {

    public:
        virtual double area() = 0;        

};

class rectangle: public shape {

    public:
        rectangle(double h, double w) : height(h), width(w) { }         
        double area() { return (height * width);    }

    private:
        double height, width;
};

//override
class circle : public shape {
    
    public:
        circle(double r) : radius(r) { }
        double area() { return(3. 14159 * radius * radius); }

    private:
        double radius;
};
        



