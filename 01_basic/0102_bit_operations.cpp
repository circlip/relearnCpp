#include <iostream>
#include <bitset>

using namespace std;
#define bin bitset<sizeof(unsigned int) * 8>

struct Date 
{
    unsigned int year : 13;
    unsigned int month: 4;
    unsigned int day  : 5;
};

int count1(unsigned int num)
{
    int ret = 0;
    while(num)
    {
        if (num & 1) ret ++;
        num >>= 1;
    }
    return ret;
}

int count2(unsigned int num)
{
    int ret = 0;
    while (num)
    {
        num &= num - 1;
        ret++;
    }
    return ret;
}

int count3(unsigned int num)
{
    const uint32_t m1 = 0x55555555;
    const uint32_t m2 = 0x33333333;
    const uint32_t m4 = 0x0f0f0f0f;

    num = (num & m1) + ((num >> 1) & m1);
    num = (num & m2) + ((num >> 2) & m2);
    num = (num & m4) + ((num >> 4) & m4);

    uint32_t ret = 0;
    while (num)
    {
        ret += num & 0x0f;
        num >>= 8;
    }
    return (int) ret;
}

int count4(unsigned int num)
{
    return __builtin_popcount(num);
}

int main(int argc, char* argv[])
{
    unsigned int a = 0b1010101100011;
    unsigned int b = 0b0000110100100;

    // bit operations
    cout << "a  : " << bin(a) << endl
         << "b  : " << bin(b) << endl
         << "a&b: " << bin(a&b) << endl
         << "a|b: " << bin(a|b) << endl
         << "~a : " << bin(~a) << endl
         << "a^b: " << bin(a^b) << endl
         << "a<<: " << bin(a<<1) << endl;

    // bitset operations
    bitset<4> num("0110");
    bool bit_val = num.test(2); // true
    num.set(0);
    num.reset(2);
    num.flip(3);

    // bit count
    unsigned int num2count = 1234u;
    cout << "bit count of " << num2count << ":"
         << count1(num2count) << ","
         << count2(num2count) << ","
         << count3(num2count) << ","
         << count4(num2count) << endl;

    // bit field in a struct 
    Date d;
    d.year = 2020;
    d.month = 03;
    d.day = 22;
    cout << "sizeof struct Date: " << sizeof(Date) << endl;

    return 0;
}