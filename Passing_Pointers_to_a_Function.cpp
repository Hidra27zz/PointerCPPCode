#include <iostream>
using namespace std;



void double_data (int *int_ptr);
void double_data (int *int_ptr) {
    *int_ptr *= 2;

    // *int_ptr = *int_ptr * 2;
}

int main () {
    int value {10};
    cout << value << endl; // 10
    double_data (&value);
    cout << value << endl; // 20
}