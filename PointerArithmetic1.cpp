#include <iostream>
#include <string>
using namespace std;

int main () {
    string s1 {"Frank"};
    string s2 {"Frank"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
 
    cout << (*p1 == *p2) << endl;//True
    cout << (*p1 == *p3) << endl;//True

    cout << (p1 == p2) << endl;//False
    cout << (p1 == p3) << endl;//True

}