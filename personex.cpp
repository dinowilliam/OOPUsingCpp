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

        void print () { cout << "Name: " << name << " Age: " << age << " Id: " << student_id << " Gpa: " << gpa <<  " Year: " << y << " Support: " << s << " Depth: " << dept 
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

        void print () { cout << "Name: " << name << " Age: " << age << " Id: " << student_id << " Gpa: " << gpa <<  " Year: " << y << " Support: " << s << " Depth: " << dept 
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

class employee : public person {

    public:

        employee(){
            age = 0;
            name = new char[1];
            strcpy(name, ""); 
            employee_id = 0;
            salary = 0.0;
            profession = new char[1];
            strcpy(profession, ""); 
        }

        employee(const char* nm, int a, int id, double s, const char* p){
            age = a;             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            employee_id = id;
            salary = s; 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p);               
        }

        bool setId(int id) { employee_id = id; }
        bool setSalary(double s) { salary = s; }
        bool setProfession(char* p) { 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p); 
        }

        int     getId() {   return employee_id;   } 
        double  getSalary() {   return salary;   }
        char*   getProfession() {   return profession;   }

        void print () {     cout << "Name: " << name << " Age: " << age << " Id: " << employee_id << " Salary: " << salary <<  " Profession: " << profession <<  endl;      }
    
    protected:

        int employee_id;
        double salary;
        char*  profession;        

};

class faculty : public employee {

    public:

        faculty(){
            age = 0;
            name = new char[1];
            strcpy(name, ""); 
            employee_id = 0;
            salary = 0.0;
            profession = new char[1];
            strcpy(profession, ""); 
        }

        faculty(const char* nm, int a, int id, double s, const char* p){
            age = a;             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            employee_id = id;
            salary = s; 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p);               
        }

        bool setId(int id) { employee_id = id; }
        bool setSalary(double s) { salary = s; }
        bool setProfession(char* p) { 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p); 
        }

        int     getId() {   return employee_id;   } 
        double  getSalary() {   return salary;   }
        char*   getProfession() {   return profession;   }

        void print () {     cout << "Name: " << name << " Age: " << age << " Id: " << employee_id << " Salary: " << salary <<  " Profession: " << profession <<  endl;      }
    
    protected:

        int employee_id;
        double salary;
        char*  profession;        

};

class nonfaculty : public employee {

    public:

        nonfaculty(){
            age = 0;
            name = new char[1];
            strcpy(name, ""); 
            employee_id = 0;
            salary = 0.0;
            profession = new char[1];
            strcpy(profession, ""); 
        }

        nonfaculty(const char* nm, int a, int id, double s, const char* p){
            age = a;             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            employee_id = id;
            salary = s; 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p);               
        }

        bool setId(int id) { employee_id = id; }
        bool setSalary(double s) { salary = s; }
        bool setProfession(char* p) { 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p); 
        }

        int     getId() {   return employee_id;   } 
        double  getSalary() {   return salary;   }
        char*   getProfession() {   return profession;   }

        void print () {     cout << "Name: " << name << " Age: " << age << " Id: " << employee_id << " Salary: " << salary <<  " Profession: " << profession <<  endl;      }
    
    protected:

        int employee_id;
        double salary;
        char*  profession;        

};

class tenure : public faculty {

    public:

        tenure(){
            age = 0;
            name = new char[1];
            strcpy(name, ""); 
            employee_id = 0;
            salary = 0.0;
            profession = new char[1];
            strcpy(profession, ""); 
        }

        tenure(const char* nm, int a, int id, double s, const char* p){
            age = a;             
            name = new char[strlen(nm)  + 1];
            strcpy(name, nm);  
            employee_id = id;
            salary = s; 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p);               
        }

        bool setId(int id) { employee_id = id; }
        bool setSalary(double s) { salary = s; }
        bool setProfession(char* p) { 
            name = new char[strlen(p)  + 1];
            strcpy(profession, p); 
        }

        int     getId() {   return employee_id;   } 
        double  getSalary() {   return salary;   }
        char*   getProfession() {   return profession;   }

        void print () {     cout << "Name: " << name << " Age: " << age << " Id: " << employee_id << " Salary: " << salary <<  " Profession: " << profession <<  endl;      }
    
    protected:

        int employee_id;
        double salary;
        char*  profession;        

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

    graduate_student concreteGraduateStudent("Graduate Student", 30, 10254, 0.6, fresh, fellowship, "1 year", "Quantum Chaos with Fractals");
    
    concreteGraduateStudent.print();
    
    extension_student concreteExtesionStudent("Extension Student", 30, 10254, 0.6, fresh, fellowship, "1 year", "Mandellbrot Set and Applications");
    
    concreteExtesionStudent.print();   

    return 0;
}