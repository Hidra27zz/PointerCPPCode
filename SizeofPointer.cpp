#include <iostream>
#include <vector>
using namespace std;

int main () {
int *p1 {nullptr};
double *p2 {nullptr};
unsigned long long *p3 {nullptr};
vector <string> *p4 {nullptr};
string *p5 {nullptr};

cout << "size of p1: " << sizeof p1 << endl;
cout << "size of p2: " << sizeof p2 << endl;
cout << "size of p3: " << sizeof p3 << endl;
cout << "size of p4: " << sizeof p4 << endl;
cout << "size of p5: " << sizeof p5 << endl;
}