#include <iostream>
#include <utility> // pair

using namespace std;

int main() 
{

    // initiialization
    pair<int, int> p = make_pair(1, 2);
    cout << p.first << ", " << p.second << endl;

    // compare
    pair<int, int> p2 = pair<int, int>(3, 4);
    cout << (p < p2) << endl;

    return 0;
}