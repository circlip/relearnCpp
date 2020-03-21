#include <iostream>

using namespace std;

int swapr(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "reference: " << a << "," << b << endl;   
    return 0;
}


int swapp(int *a, int *b)
{
    int tmp = *a;
    *a = *b; 
    *b = tmp;
    cout << "pointer: " << *a << "," << *b << endl;   
    return 0;
}


int swapv(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "value: " << a << "," << b << endl;   
    return 0;
}

int main ()
{
    int a = 6;
    int b = 233;
    int ret;
    cout << a << "," << b << endl;   

    ret = swapr(a, b);
    cout << a << "," << b << endl;   
    ret = swapp(&a, &b);
    cout << a << "," << b << endl;   
    ret = swapv(a, b);
    cout << a << "," << b << endl;   

    return 0;
    
}
