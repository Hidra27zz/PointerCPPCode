#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int j1, j2;
    
    for (int i = 0; i < n; i ++) {
        j1 = i++; 
        
        cout << "j1: " << j1 << "\n";
        cout << "i: " << i << "\n";
    }
    cout << endl;
    for (int i = 0; i < n; i ++) {
        j2 = ++i;
        
        cout << "j2: " << j2 << "\n";
        cout << "i: " << i << "\n";
    }
    cout << endl;



//n = 5

// j1: 0
// i: 1
// j1: 2
// i: 3
// j1: 4
// i: 5

// j2: 1
// i: 1
// j2: 3
// i: 3
// j2: 5
// i: 5

}