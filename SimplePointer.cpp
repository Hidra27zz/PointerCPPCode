#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main () {
    // int num(10);
    // cout << "value of num is: " << num <<endl;
    // cout << "size of num is: " << sizeof num << endl;
    // cout << "address of num is: " << &num << endl;



    int *p; 
    cout << "value of p is: " << p <<endl;
    cout << "size of p is: " << sizeof p << endl;
    cout << "address of p is: " << &p << endl;

    p = nullptr;
    cout << "value of p is: " << p <<endl;

    return 0;
}