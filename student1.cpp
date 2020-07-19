enum support { ta, ra, fellowship, other };
enum year { fresh, soph, junior, senior, grad };

class student {

    public:
        student(char* nm, int id, double g, year x);
        void print () const;
    
    private:
        int student_id;
        double gpa;
        year y;
        char name[30];

};

class grad_student : public student {

    public:
        grad_student(char* nm, int id, double g,
        year x, support t, char* d, char* th);
        void print () const;

    private:
        support s;
        char dept[10];
        char thesis [80];
        
};