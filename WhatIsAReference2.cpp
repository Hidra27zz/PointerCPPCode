#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    // int num {100};
    // int &ref {num};

    // cout << num << endl;
    // cout << ref << endl;
    
    // num = 200;
    // cout << "\n-------------------------------" << endl;
    // cout << num << endl;
    // cout << ref << endl;

    // ref = 300; 
    // cout << "\n-------------------------------" << endl;
    // cout << num << endl;
    // cout << ref << endl;

    cout << "\n-----------------------------" << endl;
    vector <string> stooges {"Larry", "Curly", "Moe"};
    for (auto str: stooges) 
    {
        str = "Funny"; // Changes the copy
        cout << str << endl; // str is a COPY of the each vector element
    }
    
    for (auto str:stooges) // No change
        cout << str << endl; // Larry, Curly, Curly
    

    cout << "\n---------------------------" << endl;
    for (auto &str: stooges) // str is a reference to each vector element 
    {
        str = "Funny"; 
        cout << str << endl; // Funny,Funny, Funny
    }


    for (auto const &str: stooges) // Notice we are using const
        cout << str << endl; // Now the vector elements have changed

    cout << endl;
    return 0;
}