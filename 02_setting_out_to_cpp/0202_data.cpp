#include <iostream>

int main()
{
    int num = 62;
    std::cout << "decimal: " << num << std::endl;
    std::cout << std::hex;
    std::cout << "hex: " << num << std::endl;
    std::cout << std::oct;
    std::cout << "oct: " << num << std::endl;

    std::cout << std::dec;
    std::cout << std::ios_base::fixed << std::endl;
    std::cout << std::ios_base::floatfield << std::endl;

    std::cout.setf(std::ios_base::fixed, std::ios::floatfield);
    std::cout << 3.33 << std::endl;


    return 0;
}

