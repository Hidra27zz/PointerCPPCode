#include <iostream>
using namespace std;

int main () {
    int score {10};
    double high_temp {100.7};
    int *score_ptr {nullptr};
    score_ptr = &score; //that Ok
    //score_ptr = &high_temp;// Compiler error
    cout << *score_ptr;
}