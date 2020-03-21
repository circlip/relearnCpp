#include <iostream>

const int Cities = 5;
const int Year = 4;
using namespace std;

int main()
{
    const char *cities [] = 
    {
        "New York",
        "Tokyo",
        "Asaka",
        "Guangzhou",
        "Soul"
    };

    const int data[2][5] =
    {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10}
    };

    cout << cities[3] << endl;
    cout << data[1][2] << endl;

    return 0;
}

