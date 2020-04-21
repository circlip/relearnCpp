#include <iostream>
#include <array>

using namespace std;

struct A
{
    int a[3];
};

auto main () -> int
{
    // initialization
    array<int, 3> a {1, 2, 3};
    array<A, 2> b { A{1, 2, 3}, A{4, 5, 6} };

    // accessing
    cout << a[0]
         << a.at(1)
         << get<2>(a)
         << a.front()
         << a.data()[1]
         << a.back() << endl;

    // iterate
    for (auto e : a) cout << e;
    cout << endl;

    // size
    cout << "size: " << a.size() << endl;

    //changing at once
    a.fill(100);
    
    return 0;
}