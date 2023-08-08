#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display (const vector <string>* const v) { 
    //(*v).at(0) = "Funny";// error
    // if dont use 'const vector', you can use (*v).at(0) = "Funny". it can be said if you use const you can't assign the varible for any value.
    for (auto str: *v)
        cout << str << " " ;
    cout << endl;
    
    //v = nullptr; 
    // if we const v, we is assign for v The address determine we can't change or return it.
    // in pointer *v is value, v is address.
}

void display (int *array, int sentinel) {
    while (*array != sentinel) 
        cout << *array++ << " ";
    cout << endl;
}

int main () {
    // int x {100}, y {200};
    // cout << "\nx: " << x << endl;
    // cout << "\ny: " << y << endl;
    // swap (&x, &y);

    // cout << "\nx: " << x << endl;
    // cout << "y: " << y << endl;

    // cout << endl;
    // return 0;

    // cout << "-----------------------" << endl;
    // vector <string> stooges {"Larry", "Moe", "Curly"};

    // display (&stooges);

    cout << "-----------------------" << endl;
    int scores[] {100, 98, 97, 79, 85, -1};
    display (scores, -1);

    cout << endl;
    return 0;

}