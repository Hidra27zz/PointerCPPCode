#include <iostream>
#include <string>

using namespace std;

int main () {
    string name {"Frank"};
    string *string_ptr {&name};
    cout << *string_ptr << endl; // Frank
    name = "James";
    cout << *string_ptr << endl; //James


    return 0;
}