#include <iostream>
using namespace std;
void swapPointers(int* ptr1, int* ptr2) {
//-- Write your code below this inline
    
    *ptr1 = *ptr1 + *ptr2;
    // cout << *ptr1 << endl;
    // cout << *ptr2 << endl;
    *ptr2 = *ptr1 - *ptr2;
    // cout << *ptr1 << endl;
    // cout << *ptr2 << endl;
    *ptr1 = *ptr1 - *ptr2;
    cout << *ptr1 << endl << *ptr2;
    
//-- Write your code above this line
}
int main () {
    int A, B;
    int* a = &A;
    int* b = &B;
    cin >> A >> B;
    swapPointers (a, b);
}