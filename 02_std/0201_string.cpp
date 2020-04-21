#include <iostream>
#include <cstring> // strtok
#include <sstream> // istringstream
#include <iterator> // istream_iterator
#include <regex> // regex_token_iterator
#include <vector>
#include <codecvt>
#include <locale>

using namespace std;
using convert_t = codecvt_utf8<wchar_t>;

auto main() -> int
{

    string s1("hello, ");
    string s2 = "world.";
    cout << s1.data() << s2.data() << endl;

    // tokenization
    cout << "### tokenization ###" << endl;
    string s3("The quick brown fox");
    vector<string> tokens;
    for (auto i = strtok(&s3[0], " "); i != NULL; i = strtok(NULL, " "))
    {
        tokens.push_back(i);
    }
    
    const string s4("The quick \tbrown \nfox");
    istringstream istrstr(s4);
    const vector<string> tokens2 = vector<string>(istream_iterator<string>(istrstr), 
                             istream_iterator<string>());

    // String to tokenize
    const string str{ "The ,qu\\,ick ,\tbrown, fox" };
    const regex re{ "\\s*((?:[^\\\\,]|\\\\.)*?)\\s*(?:,|$)" };
    // Vector to store tokens
    const vector<string> tokens3{ 
        sregex_token_iterator(str.begin(), str.end(), re, 1), 
        sregex_token_iterator() 
    };

    cout << tokens[2] << tokens2[2] << tokens3[2] << endl;

    // wstring
    wstring_convert<convert_t, wchar_t> strconverter;
    wstring wide_string = strconverter.from_bytes("hello world.\n");

    // string replacement
    string original = "hello world";
    string alternative = "hello foobar";
    original.replace(original.begin(), original.begin() + 5, 
                     alternative.begin() + 6, alternative.end());
    cout << original << endl;

    // convert to string
    int val = 4;
    ostringstream ss;
    ss << val;
    cout << ss.str() << endl;

    // is prefix
    string prefix = "foo";
    string mystring = "foobar";
    bool isprefix1 = mismatch(prefix.begin(), prefix.end(),
                              mystring.begin(), mystring.end()).first == prefix.end();
    // in c++17. should compile with -std=c++17
    string_view prefix2 = string_view(prefix);
    string_view mystring2 = string_view(mystring);
    bool isprefix2 = prefix2 == mystring2.substr(0, prefix2.size());
    cout << isprefix1 << ":" << isprefix2 << endl;

    // char
    cout << mystring.front() << mystring[1] << mystring.at(2) << mystring.back() << endl;

    // loop through
    for (auto c : mystring)
    {
        cout << c;
    }
    cout << endl;

    // spliting
    cout << mystring.substr(2, 3) << endl;

    // concatention
    mystring += prefix;
    mystring.push_back(' ');
    mystring.append("##");
    cout << mystring << endl;

    // string to num
    string ten = "10";
    string ten_octal = "12";
    string ten_hex = "0xA";

    int num1 = stoi(ten, 0, 2); // Returns 2
    int num2 = stoi(ten_octal, 0, 8); // Returns 10
    long num3 = stol(ten_hex, 0, 16);  // Returns 10
    long num4 = stol(ten_hex);  // Returns 0
    long num5 = stol(ten_hex, 0, 0); // Returns 10 as it detects the leading 0x

    // encoding
    wstring_convert<codecvt_utf8<wchar_t>> wchar_to_uft8;
    wstring wstr = L"foobar";
    string uft8_str = wchar_to_uft8.to_bytes(wstr);
    wstring wstr2 = wchar_to_uft8.from_bytes(uft8_str);
    wcout << wstr << L" " << wstr2 << L" ";
    cout << uft8_str << endl;

    // find
    cout << mystring.find("bar") << " " << mystring.find_last_not_of("foo") << endl;

    return 0;
}