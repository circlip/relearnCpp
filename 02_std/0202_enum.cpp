#include <iostream>
#include <vector>

using namespace std;

enum class E
{
    mon,
    tue,
    wed,
    thur,
    fri,
    sat,
    sun
};

E& operator++(E& e)
{

    if (e == E::sun) e = E::mon;
    else e = E(static_cast<underlying_type<E>::type>(e) + 1);
    return e;
}

vector<E> build_all_E()
{
    const E all[] = {E::mon, E::tue, E::wed, 
                     E::thur, E::fri, E::sat, E::sun};
    return vector<E>(all, all + sizeof(all) /sizeof(E));
}

constexpr initializer_list<E> allE2 = {E::mon, E::tue, E::wed, 
                                       E::thur, E::fri, E::sat, 
                                       E::sun};

auto main() -> int
{
    for (E e = E::mon; e != E::sun; ++e) cout << static_cast<int>(e);
    cout << endl;

    // use container vector
    vector<E> allE = build_all_E();
    for (auto it = allE.begin(); it != allE.end(); ++it) cout << static_cast<int>(*it);
    cout << endl;

    // use container initializer_list
    for (auto e : allE2) cout << static_cast<int>(e);
    cout << endl;

    return 0;
}

