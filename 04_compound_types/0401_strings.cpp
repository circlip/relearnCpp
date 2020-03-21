#include <iostream>

using namespace std;

int main()
{
    char name[32];
    char dessert[32];
    cout << "Input your names: ";
    cin.getline(name, 32);
    cout << "Your favorite food: ";
    cin.getline(dessert, 32);

    cout << "Hello, " << name << ". This is " << dessert << " for you."
        << endl;


    int year;
    char address[256];
    cout << "Input year: ";
    cin >> year;
    cin.get();
    cout << "Input address: ";
    cin.getline(address, 256);
    cout << "Year " << year << ": " << address << endl;
    return 0;
}

