// Write the function here
// All you need to write is the complete function, we will write the main() function behind the scenes
// that will call your function with various paramnter values to test it.
#include <iostream>
using namespace std;

void multiply_with_pointer(int* ptr, int multiplier);
void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier; 
}