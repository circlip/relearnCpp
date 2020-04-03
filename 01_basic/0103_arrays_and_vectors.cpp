#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

auto main() -> int 
{
    // arrays
    int array_int[5] = {0, 1, 2, 3, 4};
    cout << array_int[3] << ", ";

    int const n_rows = 3;
    int const n_cols = 2;
    int array_2d[n_rows][n_cols];
    for (int x = 0; x < n_rows; x++)
    {
        for (int y = 0; y < n_cols; y++)
            array_2d[x][y] = n_cols * x + y;
    }
    cout << array_2d[1][1] << ", ";

    int const num = 8;
    int *array_ptr = new int[num];
    for (int x = 0; x < num; x++)
    {
        array_ptr[x]= x;
    }
    cout << array_ptr[3] << ", ";

    const auto n = std::extent<decltype(array_ptr)>::value;
    cout << "num: " << n << endl;

    delete [] array_ptr;

    // vectors
    vector<int> a;
    a.push_back(3);
    a.push_back(9);
    a.push_back(7);

    const int v_size = a.size();
    cout << "before sorting: " ;
    for (int x = 0; x < v_size; x++) cout << a[x] << " ";
    cout << endl;

    sort(a.begin(), a.end());
    cout << "after sorting : " ;
    for (int x = 0; x < v_size; x++) cout << a[x] << " ";
    cout << endl;



    return 0;
}