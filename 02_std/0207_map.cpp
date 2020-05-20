#include <iostream>
#include <map> // map 

using namespace std;

auto main () -> int 
{
    
    // accessing elements
    map<string, int> ranking {make_pair("python", 1),
                             make_pair("java", 2)};
    
    ranking["cpp"] = 3;
    for (auto it = ranking.begin(); it != ranking.end(); it++)
        cout << it->first << ": " << it->second << ";    ";
    cout << endl;
    cout << ranking["python"] << ranking.at("java") << endl;

    // insert
    ranking.insert({"c", 4});
    ranking.insert(make_pair("javascript", 5));
    ranking.insert(pair<string, int>("scala", 6));
    auto ret = ranking.insert(map<string, int>::value_type("fortran", 7));
    // ret: {iterator, bool}
    cout << ret.first->first << ": " << ret.first->second << ": " << ret.second << endl;

    

    return 0;
}