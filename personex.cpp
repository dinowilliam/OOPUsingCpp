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

        person() { 
            name = new char[1];
            strcpy(name, "");
            age = 0; 
        }

        person(const char* nm, int a){ 
            age =  a;            
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);            
        }
        
        void setAge(int a) { age = a; }
        
        void setName(const char* nm) {             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
        }

        int     getAge() { return age; }
        char*   getName() { return name; }

        void print () { cout << "Name: " << name << " Age: " << age << endl; }
    
    protected:

        char*  name;
        int    age;

};

enum support { ta, ra, fellowship, other };
enum year { fresh, soph, junior, senior, grad };

class student : public person {

    public:

        student(){
            age = 0;
            name = new char[1];
            strcpy(name, ""); 
            student_id = 0;
            gpa = 0.0;
            y = fresh;  
        }

        student(const char* nm, int a, int id, double g, year x){
            age = a;             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            student_id = id;
            gpa = g; 
            y = x;  
        }

        bool setId(int id) { student_id = id; }
        bool setGpa(double g) { gpa = g; }
        bool setYear(year x) { y = x; }

        int     getId() { return  student_id; } 
        double  getGpa() { return gpa; }
        year    getYear() { return y; }

        void print () { cout << "Name: " << name << " Age: " << age << " Id: " << student_id << " Gpa: " << gpa <<  " Year: " << y <<  endl; }
    
    protected:

        int student_id;
        double gpa;
        year y;        

};

class graduate_student : public student {

    public:

        graduate_student(){
            age = 0;
            name = new char[1];
            strcpy(name, "");
            student_id = 0; 
            gpa = 0.0; 
            y = fresh;
            s = ta;             
            strcpy(dept, "");             
            strcpy(thesis, "");  
        }

        graduate_student(char* nm, int a, int id, double g, year x, support t, char* d, char* th){
            age = a;
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            student_id = id; 
            gpa = g; 
            y = x; 
            s = t;             
            strcpy(dept, d);             
            strcpy(thesis, th);  
        }

        void print () { cout << "Name: " << name << " Age: " << age << " Id: " << student_id << " Gpa: " << gpa <<  " Year: " << y << " Support: " << thesis << " Depth: " << dept 
                             <<  " Thesis: " << thesis << endl; }

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

        void print () { cout << "Name: " << name << " Age: " << age << " Id: " << student_id << " Gpa: " << gpa <<  " Year: " << y << " Support: " << thesis << " Depth: " << dept 
                             <<  " Thesis: " << thesis << endl; }

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
    person concretePerson("Person 1", 30);

    student concreteStudent("Student 1", 30, 10254, 0.6, fresh);
     
    cout << "Pesonex Test " << endl;   

    concretePerson.print();        
    concreteStudent.print();

    concreteStudent.setName("Student 2");    
    concreteStudent.setAge(32); 
    
    concreteStudent.print();

    graduate_student concreteGraduateStudent("Student 3", 30, 10254, 0.6, fresh, ta, "1 year", "Quantum Chaos with Fractals");
    
    concreteGraduateStudent.print();

    /*
    concretePerson.setName("John Von Newman");    
    concretePerson.setAge(46);
    
    concretePerson.print();    

    concretePerson.setName("Frederick Brooks");    
    concretePerson.setAge(47);
    
    concretePerson.print();    

    concretePerson.setName("Donald Kuth");    
    concretePerson.setAge(48);
    
    concretePerson.print();    
    */

    return 0;
}