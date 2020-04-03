#include <iostream>

using namespace std;

int main()
{
    int iterations = 8;
    int i;

    for (i = 0; i < iterations; i++)
    {
        cout << i;
    }
    cout << endl;


    i = 0;
    while (i++ < iterations)
    {
        cout << i;
    }
    cout << endl;

    i = 8;
    // this should be avoid, it is not guaranteed
    int y = i++ + i++;
    cout << y << endl;
    cout << i << endl;


    return 0;
}

