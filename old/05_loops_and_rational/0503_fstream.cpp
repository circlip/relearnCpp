#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream output;
    output.open("fish.txt");

    double num = 3.14;
    output << num ;
    output.close();

    ifstream input;
    input.open("fish.txt");
    if (!input.is_open())
    {
        exit(EXIT_FAILURE);
    }
    double num2;
    
    
    while (input.good())
    {
        input >> num2;
        cout << num2 << endl;
    }

    if (input.eof())
    {
        cout << "reached eof" << endl;
    }
    else if (input.fail())
    {
        cout << "data mismatch" << endl; 
    }
    else 
    {
        cout << "unknown reason" << endl;
    }

    input.close();

    return 0;
}

