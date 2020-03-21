#include <iostream>

enum gender {male, female};

class Student
{
private:
    gender g;
    int age;
    int score;
public:
    Student();
    Student(int score);
    int get_gender();
    int get_age();
    int get_score() const;
    const Student & cmp(const Student & s) const;
    ~Student();
};

Student::Student()
{
    g = male;
    age = 18;
    score = 98;
}

Student::Student(int score)
{
    g = male;
    age = 18;
    this->score = score;
}

Student::~Student()
{
    std::cout << "goodbye." << std::endl;
}


int Student::get_gender()
{
    return g;
}

int Student::get_age()
{
    return age;
}

int Student::get_score() const
{
    return score;
}

const Student & Student::cmp(const Student & s) const
{
    if (s.score > score)
    {
        return s;
    }
    else 
    {
        return *this;
    }
}

int main()
{
    Student jack = Student();
    std::cout << jack.get_score() << std::endl;
    Student Tom = Student();
    std::cout << Tom.cmp(jack).get_score() << std::endl;
    return 0;
}

