#include <iostream>

using namespace std;

struct item 
{
    int num;
    double price;
};

// bit
struct bitItem
{
    int num : 4;
    bool isValid : 1;
    bool isEmpty : 1;
};

//union
union one4all
{
    int int_val;
    float float_val;
    double double_val;
};

// enumeration
enum days 
{
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

int main()
{
    item apple = {5, 6.66};
    cout << apple.num << " " << apple.price << endl;
    bitItem banana = {7, true, false};
    cout << banana.num << " " << banana.isValid << " " << banana.isEmpty << endl;
    one4all test;
    test.int_val = 5;
    cout << test.int_val << endl;
    days myday = monday;
    cout << myday << endl;
    return 0;
}

