#include <iostream>

// class
class foo
{
    int x;
public:
    int get_x() { return x; }
    void set_x(int newx) { x = newx; }
};

// enum class
enum class Format
{
    TEXT, PDF, OTHERS,
};

class A 
{
private:
    int a1;
protected:
    int a2;
public:
    int a3;
    friend int test(const A&);
    void test_virtual_inheritance();
};

// friend function can access all members in A
int test(const A& obj) { return obj.a1; }

// final: other class cannot inherit from a final class
class B final : public A
{
    int b;
};

// inheritance
class A1 : public A
{
    /*
    a1: public
    a2: protected
    a3: private in A, cannot inherit
    */
};

class A2 : protected A
{
    /*
    a1: protected
    a2: protected
    a3: private in A, cannot inherit
    */
};

class A3 : private A
{
    /*
    a1: private
    a2: private
    a3: private in A, cannot inherit
    */
};

class INHERIT_1 : public virtual A
{

};

class INHERIT_2 : public virtual A
{

};

class INHERIT_3 : public INHERIT_1, public INHERIT_2
{

};

auto main() -> int
{
    return 0;
}


