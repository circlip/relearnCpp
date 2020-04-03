#include <iostream>
using namespace std;


struct S
{
    int t;
};

int main(int argc, char *argv[])
{
    bool flag = true; // bool types

    S *s = new S; // s is a pointer
    delete s;
    s = nullptr; // nullptr is not a pointer to objects/structs

    int decemal = 42;
    int octal = 052;
    int hex = 0x2a;
    int binary = 0b010101;
    unsigned int un = 16u;

    char ch = 'd';
    char16_t c16 = 'd';
    char32_t c32 = 'c';
    wchar_t wc[] = L"你好";

    float f = 1.9f;
    double d = 3.14;

    double a = 0.1, b = 0.2, c = 0.3;
    if (a + b == c) cout << "magical computer" << endl;
    else cout << "normal computer" << endl;

    return 0;
}