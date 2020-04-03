#include <iostream>

struct operation
{
    int a;
    int b;
    int (*calc)(int, int);
};

int add(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int multiple(int a, int b)
{
    return a * b;
}


int main()
{
    operation op;
    op.a = 5;
    op.b = 3;
    op.calc = add;
    std::cout << op.calc(op.a, op.b) << std::endl;
    op.calc = minus;
    std::cout << op.calc(op.a, op.b) << std::endl;
    op.calc = multiple;
    std::cout << op.calc(op.a, op.b) << std::endl;
    return 0;
}

