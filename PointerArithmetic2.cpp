//section 12
//Pointer Arithmetic
#include <iostream>
using namespace std;

int main () {
    // int scores[] {100, 95, 89, 68, -1};
    // int *score_ptr {scores};

    // while (*score_ptr != -1) {
    //     cout << *score_ptr << endl;//dereference the pointer
    //     score_ptr++;//increment the pointer to point to the next integer in the array.
    // }
    // cout << "\n---------------------" << endl;
    // score_ptr = scores;
    // while (*score_ptr != -1) {
    //     cout << *score_ptr++ << endl; //dereference and increment the pointer.
    // }


    // string s1 {"Frank"};
    // string s2 {"Frank"};
    // string s3 {"James"};

    // string *p1 {&s1};
    // string *p2 {&s2};
    // string *p3 {&s1};
 
    // cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;//0x7ffe2f051ed0 == 0x7ffe2f051ef0: 0
    // cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;//0x7ffe2f051ed0 == 0x7ffe2f051ed0: 1
    // //these are comparing about address

    // cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;// Frank == Frank: 1
    // cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;// Frank == Frank: 1
    // //these are comparing about value

    // p3 = &s3;
    // cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;// Frank == James: 0
    // cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;//0x7fff6eaf1280 == 0x7fff6eaf12c0: 0

    char name[] {"Frank"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl; //In the string Frank, n is 3 characters away from F
    cout << endl;
    return 0;

}