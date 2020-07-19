/************************************************************************************************************************************/
/*  Object-Oriented Programming Using C++ by Ira Pohl - Second Edition                                                              */
/*  Program: personex.cpp                                                                                                           */
/************************************************************************************************************************************/

//personex in C++ (This is the program from the picture model of class person inheritance)
#include <iostream>        //IO library
#include <string>          //string stype

using namespace std;      //standart library's namespace

class person {

    public:

        person() { name = "", age = 0; }

        person(char* nm, int a){ age =  a, name = nm; }
        
        bool setAge(char* n) { name = n; }
        bool setName(int a) { age = a; }

        int     getAge() { return age; }
        char*   getName() { return name; }
    
    protected:

        char*  name;
        int    age;

};

enum support { ta, ra, fellowship, other };
enum year { fresh, soph, junior, senior, grad };

class student : public person {

    public:

        student(){
            age = 0, strcpy(name, ""), student_id = 0, gpa = 0.0, y = fresh;  
        }

        student(char* nm, int a, int id, double g, year x){
            age = a, strcpy(name, nm), student_id = id, gpa = g, y = x;  
        }

        bool setId(int id) { student_id = id; }
        bool setGpa(double g) { gpa = g; }
        bool setYear(year x) { y = x; }

        int     getId() { return  student_id; } 
        double  getGpa() { return gpa; }
        year    getYear() { return y; }

        void print () const;
    
    protected:

        int student_id;
        double gpa;
        year y;
        char name[30];

};

class graduate_student : public student {

    public:

        graduate_student(){
            age = 0, strcpy(name, ""), student_id = 0, gpa = 0.0, y = fresh, s = ta, strcpy(dept, ""), strcpy(thesis, "");  
        }

        graduate_student(char* nm, int a, int id, double g, year x, support t, char* d, char* th){
            age = a, strcpy(name, nm), student_id = id, gpa = g, y = x, s = t, strcpy(dept, d), strcpy(thesis, th);  
        }

        void print () const;

        bool setSupport(support st){    s = st;      }
        bool setDept(char* d){  strcpy(dept,d);   }
        bool setThesis(char* t){  strcpy(thesis,t);   }

        support getSupport(){    return s;       }
        char*   getDept(){    return dept;    }
        char*   getThesis() {     return thesis;  }

    private:

        support s;
        char dept[10];
        char thesis[80];
        
};

class extension_student : public student {

    public:

        extension_student(){
            age = 0, strcpy(name, ""), student_id = 0, gpa = 0.0, y = fresh, s = ta, strcpy(dept, ""), strcpy(thesis, "");  
        }

        extension_student(char* nm, int a, int id, double g, year x, support t, char* d, char* th){
            age = a, strcpy(name, nm), student_id = id, gpa = g, y = x, s = t, strcpy(dept, d), strcpy(thesis, th);  
        }

        void print () const;

        bool setSupport(support st){    s = st;      }
        bool setDept(char* d){  strcpy(dept,d);   }
        bool setThesis(char* t){  strcpy(thesis,t);   }

        support getSupport(){    return s;       }
        char*   getDept(){    return dept;    }
        char*   getThesis() {     return thesis;  }

    private:

        support s;
        char dept[10];
        char thesis [80];
        
};

int main(){
    person* concretePerson = new person();
     
    cout << concretePerson->getAge() << endl;

    return 0;
}