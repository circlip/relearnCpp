#include <iostream>
#include "Time.h"

int main()
{
    Time start = Time(1, 20);
    Time end = Time(4, 30);
    std::cout << (end - start).get_h() << std::endl;
    int t = 90;
    Time newt = t + start;
    std::cout << newt.get_m() << std::endl;
    return 0;
}

