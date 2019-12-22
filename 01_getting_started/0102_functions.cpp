#include "0100_header.h"

int func1(int a) {
    return a / 2;
}

int main()
{
    int num = 0;
    std::cout << "Input num:";
    std::cin >> num;

    double ans = sqrt(func1(num));
    std::cout << "The square root of " 
        << num
        << " is "
        << ans
        << "." << std::endl;

    return 0;
}

