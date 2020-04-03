#include <iostream>
#include <stdexcept> // nonexpect

using namespace std;

struct S
{
    int x = 7;
};

int f() { return 3; }
int &g() { static int x = 5; return x; }


// class 
class food
{
    int x;
public: 
    int getx() { return x; }
    void setx(int newx) { x = newx; }
};

// elaberated type
class foo; // elaborated type specifier -> forward declaration
class bar {
  public:
    bar(foo& f);
};
void baz();
class baz; // another elaborated type specifer; another forward declaration
           // note: the class has the same name as the function void baz()
class foo {
    bar b;
    friend class baz; // elaborated type specifier refers to the class,
                      // not the function of the same name
  public:
    foo();
};

// template
template <typename T>
const T& miny(const T &x, const T &y)
{
    return (x < y) ? x : y;
}

// enum class
enum class Day
{
    mon, tue, wed, thur, fri, sat, sun,
};

// nonexpect
void foo2() { throw runtime_error("oops"); }
void bar2() {}
struct ST {};


auto main() -> int
{
    // decltype
    int x = 5;
    decltype(x) y = 5;  // type int
    const S s;
    decltype(s.x) z = 6;    // type int, though s is const
    decltype(f()) a = f();  // a: type int
    decltype(g()) b = g();  // b: type int &
    decltype((x)) v = x;    // v: type int &. 
    /*
    * NOTE: when decltype((x)): x is type T
    * if x : lvalue -> T &
    *        xvalue -> T &&
    *       prvalue -> T
    */
 
    // tmplate 
    int x2 = 2, y2 = 4;
    const int a2 = miny<int>(x2, y2);

    // enum class
    Day myday = Day::mon;

    // noexpect 
    cout << noexcept(foo2()) << noexcept(bar2())
         << noexcept(S()) << noexcept(1 + 1) << endl;

    return 0;
}