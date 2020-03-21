#include <iostream>

using namespace std;

struct operation
{
    int count;
    double t;
};

const operation & clone(operation &op)
{
    op.count++;
    return op;
}

int main()
{
    operation op = {5, 3.14};
    cout << "original: " << op.count << ", ";
    operation op2 = clone(op);
    cout << "updated: " << op2.count << endl;
    return 0;
}

