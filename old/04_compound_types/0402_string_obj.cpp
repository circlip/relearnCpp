#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Hello ";
    string s2 = "world.";
    string s3 = s1 + s2;

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s3.size() << endl;
    
    return 0;
}

