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

// private inheritance restricting base class interface
class base_class
{
public:
    int move();
    int turn();
};

class derived_class : private base_class
{
public:
    using base_class::turn; // can call turn()
    // cannot call move()
};

// multiple inheritance
class base1
{
public:
    int function() { return 0; }
};

class base2
{
public:
    int function() { return 1; }
};

class derived : public base1, public base2
{

};

// static class member
class static_example
{
public:
    static_example() { ++num_instance; }
    static int static_func();
    static std::string static_str;
    void set_str(const std::string &str);
    int get_num() {return num_instance; }
private:
    static int num_instance;
    int i;
};

int static_example::num_instance = 0;
std::string static_example::static_str = "hello, world";

auto main() -> int
{
    // multiple inheritance call
    derived d;
    d.base1::function();    

    // static 
    static_example static_ex1;
    std::cout << static_ex1.get_num() << std::endl;
    static_example static_ex2;
    std::cout << static_ex2.get_num() << std::endl;

    return 0;
}


