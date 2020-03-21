#ifndef _STUDENT_H
#define _STUDENT_H

enum gender {male, female}

class Student
{
public:
    Student() {}
    Student(gender g, int score, int ID) 
    {
        this->g = g;
        this->score = score;
        this->ID = ID;
    }
    ~Student() {}
    int get_gender() {return this->g;}
    int get_score() {return this->score;}
    int get_ID() {return this->ID;}

private:
    gender g;
    int score;
    int ID;
};

#endif
