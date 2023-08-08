#include <iostream>
using namespace std;

int main () {
    int score {100};
    int *score_ptr {&score};//100
    cout << *score_ptr << endl;//100


    *score_ptr = 200;//because the value hear will assign to &score in line 6, so *score_ptr and score will be print 200;
    cout << *score_ptr << endl;//200
    cout << score << endl;//200

}