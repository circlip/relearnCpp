#include <iostream>

int main()
{
    std::cout << "\aInput string: ______\b\b\b\b\b\b" ;
    long num;
    std::cin >> num;
    std::cout << "The input is : " << num << std::endl;


    wchar_t wc = L'P';
    std::wcout << wc << std::endl;
    std::wcout << L"tall" << std::endl;


    return 0;
}

