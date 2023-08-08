#include <iostream>
using namespace std;

int main () {
    long  score [] {11111, 1123, 34, 333};
    long  *score_ptr {score};
    cout << score_ptr << endl;
    cout << (score_ptr + 1) << endl;
    cout << (score_ptr + 2) << endl;

}