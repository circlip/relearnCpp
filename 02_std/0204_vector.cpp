#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
public: 
    Point(int x, int y) : x_(x), y_(y) {}
    void show() { cout << x_ << "," << y_ << endl; }
private: 
    int x_;
    int y_;
};

bool greater_equal_5(const int &element)
{
    return (element >= 5);
}

void func(int const &value) { cout << value; }

int main () 
{
    // accessing
    vector<int> v {4, 5, 6, 7};
    cout << v.size() << ": " 
         << v.front() << v[1] << v.at(2)  << v.back() << endl;

    // manipulate
    v.insert(v.begin() + 1, 7);
    v.erase(v.begin() + 3);

    // iterate
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << (*it);
    cout << endl;

    // initialize
    vector<int> v1 {3, 6}; // v = {3, 6}
    vector<int> v2 (3, 6); // v = {6, 6, 6}

    int array[] = {100, 101, 102, 103};
    vector<int> v3 (array, array+2);
    v3.assign(v2.begin(), v2.end());

    // deleting element
    vector<int> v4(array, array + 4);
    v4.pop_back();
    v4.erase(v4.begin() + 2);
    v4.clear();
    // erase remove
    vector<int> v5 {1, 1, 2, 4, 2, 3, 3, 4, 4, 5, 5, 5, 6, 2, 3, 2, 4, 1, 1, 1};
    vector<int> v6(v5);
    // remove 3
    v5.erase(remove(v5.begin(), v5.end(), 3), v5.end());
    // remove >= 5
    v5.erase(remove_if(v5.begin(), v5.end(), greater_equal_5), v5.end());
    // remove <= 2
    v5.erase(remove_if(v5.begin(), 
                       v5.end(),
                       [](auto &element){return (element <= 2);}),
             v5.end());
    for (auto it = v5.rbegin(); it != v5.rend(); ++it)
        cout << (*it);
    cout << endl;

    // iterate
    for (auto &element : v6) { cout << element; }
    cout << endl;

    for_each(v6.begin(), v6.end(), func);
    cout << endl;

    for_each(v6.begin(), v6.end(), [](auto &value){cout << value;});
    cout << endl;

    // insert
    vector<Point> pv;
    Point A (5, 6);
    Point B (A);
    pv.push_back(A);
    pv.emplace_back(7, 3);
    for (auto p : pv) p.show();
    pv.insert(pv.begin(), B);
    pv.emplace(pv.begin() + 1, 100, 101);

    // find
    auto it = find(v6.begin(), v6.end(), 4);
    auto index = distance(v6.begin(), it);

    it = find_if(v6.begin(), v6.end(), [](int &x){ return (x > 2); });
    index = distance(v6.begin(), it);

    // sort
    vector<int> v7 {1, 5, 3, 4, 2};
    sort(v7.begin(), v7.end());
    bool exists = binary_search(v7.begin(), v7.end(), 3);
    auto ub = upper_bound(v7.begin(), v7.end(), 3);
    auto lb = lower_bound(v7.begin(), v7.end(), 3);
    auto uindex = distance(v7.begin(), ub);
    auto lindex = distance(v7.begin(), lb);
    cout << static_cast<int>(uindex) << ", " << static_cast<int>(lindex) << endl; 

    // reducing capacity
    vector<int> v100(100);
    cout << v100.capacity() << ", ";
    v100.erase(v100.begin() + 50, v100.end());
    v100.shrink_to_fit();
    cout << v100.capacity() << endl;

    // max min
    auto maxit = max_element(v7.begin(), v7.end());
    auto minit = min_element(v7.begin(), v7.end());

    
    

    
    return 0;
}
