#include <iostream>
using namespace std;

int main () {
    int *p;
    cout << "Value if p is: " << p << endl;//0x7f... garbage value
    cout << "Address of p is: " << &p << endl;//0x7f..
    cout << "Size of p is: " << sizeof p << endl;//because i use operating system x64 so sizeof the pointer will be 8 bytes
    p = nullptr;// set p to point nowhere
    cout << "Value of p is: " << p << endl; //0
}