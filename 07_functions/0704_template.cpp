#include <iostream>

using namespace std;


template <typename T>
int swap_tmp(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
    return 0;
}

template <typename T>
void add(T &a, T &b)
{
    b = a + 1;
}

template <>
void add<double>(double &a, double &b)
{
    b = a + 3.14;
}

void add(float &a, float &b)
{
    b = a + 1.2f;
}

int main()
{
    double pi = 3.14;
    double g = 9.8;
    cout << pi << " " << g << endl;
    swap_tmp(pi, g);
    cout << pi << " " << g << endl;

    int inta = 1, intb = 0;
    add(inta, intb);
    cout << inta << " " << intb << endl;

    double da = 1.0, db = 0.0;
    add(da, db);
    cout << da << " " << db << endl;

    float fa = 2.0f, fb = 0.0f;
    add(fa, fb);
    cout << fa << " " << fb << endl;

    return 0;
}

