#include <iostream>

using namespace std;

// const keyword
class MyClass
{
private:
    int myint;
public:
    MyClass(int t) : myint(t) {}
    int getint() const { return myint; }
};

class Student
{
public:
    // unconstant member function
    char &GetScore(bool midterm)
    {
        return const_cast<char &>(const_cast<const Student *>(this)->GetScore(midterm));
    }
    // constant member function
    const char &GetScore(bool midterm) const
    {
        if (midterm) return midTermScore;
        else return finalScore;
    }
private:
    char midTermScore;
    char finalScore;
};

// mutable keyword
// can be used to cache expensive data
class PiCaculator
{
public:
    double get_pi() const
    {
        if (calculated) 
        {
            cout << "return in a flash." << endl;
            return pi;
        }
        else 
        {
            cout << "this cost very long time." << endl;
            pi = 3.14;
            calculated = true;
            return pi;
        }
    }
private:
    mutable bool calculated = false;
    mutable double pi = 0;
};

// friend
// if a function is a friend to a class,
// this function can access the class's private members
void friend_func();
class Accessor
{
public:
    void todo();
};
class Classroom
{
public: 
    Classroom(int t) : num(t) {}
    friend void Accessor::todo(); // friend method
private:
    int num;
    // NOTE: friend function can not be inherited
    friend void friend_func();
};
void friend_func()
{
    Classroom c102(50);
    cout << "a friend function to access a class's private member: " 
         << c102.num << endl;
}
void Accessor::todo()
{
    Classroom a123(80);
    cout << "a friend method to access a class's private member: "
         << a123.num << endl;
}


auto main() -> int 
{
    // const variables
    const int constint5 = 5;
    const int constint11 = 11;
    int c9 = 9;
    const int *ptr2constint11 = &constint5; // ptr2constint can point to other const int
    ptr2constint11 = &constint11;
    const int &ref2constint5 = constint5;
    int * const constptr2int18 = &c9; // constptr2int should always point to c
                                   // but c can be changed
    *constptr2int18 = 18;
    const int * const constptr2constint5 = &constint5; // should always point to 
                                                     // and should not be change
    cout << *ptr2constint11 << " " << ref2constint5 << " "
         << *constptr2int18 << " " << *constptr2constint5
         << endl;

    // const member function
    MyClass apple = MyClass(5);
    cout << apple.getint() << endl;

    Student jerry;
    // assign to the reference, non-const version called
    jerry.GetScore(true) = 'A';
    jerry.GetScore(false) = 'B';
    // create a const object from jerry
    const Student tom(jerry);
    // call const member function
    cout << tom.GetScore(true) << tom.GetScore(false) << endl;

    // mutable keywords
    int a = 0;
    auto good_counter = [a]() mutable { return ++a; } ;
    cout << good_counter() << good_counter() << endl;
    // const object whose private attribute can be modified
    const PiCaculator pc;
    pc.get_pi();
    pc.get_pi();

    // friend function accessing a class's private member
    friend_func();
    Accessor acc;
    acc.todo();

}