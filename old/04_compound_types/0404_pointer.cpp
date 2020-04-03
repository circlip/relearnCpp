#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 7;
    cout << *p << endl;
    delete p;

    // create dynamic arrays
    int *arr = new int [10];
    arr[6] = 100;
    cout << arr[6] << endl;

    delete [] arr;

    return 0;
}

