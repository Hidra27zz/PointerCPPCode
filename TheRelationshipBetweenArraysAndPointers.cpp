#include <iostream>
using namespace std; 
int main () {
    int scores[] {99, 55, 64, 112};
    int *score_ptr {scores};
    
    cout << "value of scores: " << scores << endl;
    cout << "value of score_ptr " << score_ptr << endl;
    // cout << scores << endl;
    // cout << *scores << endl;
    
    // cout << score_ptr << endl;
    // cout << *score_ptr << endl;

    cout << "\nArray subscript notation -----------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;



    cout << "\nPointer subscript notation -----------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;



    // cout << score_ptr << endl;//0x7fffadd4f230
    // cout << (score_ptr + 1) << endl;//0x7fffadd4f234
    // cout << (score_ptr + 2) << endl;//0x7fffadd4f238
    // cout << (score_ptr + 3) << endl;


    cout << "\nPointer offset notation -----------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation -----------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;



    return 0;
}