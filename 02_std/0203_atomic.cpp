#include <iostream>
#include <atomic>
#include <thread>

using namespace std;

atomic_int foo (0);

void set_foo(int x)
{
    cout << "setting foo... " << endl;
    foo.store(x, memory_order_relaxed);
}

void put_foo()
{
    cout << "putting foo... " << endl;
    int x = 0;
    do 
    {
        x = foo.load(memory_order_relaxed);
    }
    while (x == 0);

    cout << "foo = " << x << endl;
}

auto main() -> int
{
    thread first (put_foo);
    thread second (set_foo, 5);
    first.join();
    second.join();

    return 0;
}