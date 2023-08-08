#include <iostream>
using namespace std;

int *create_array (size_t size, int init_value = 0) {
    int *new_storage {nullptr};

    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i) {
        // cout << "i: " << i << "\n";
        // cout << "new_storage: " << *new_storage << endl;
        // cout << "size " << size << "\n";
        
        *(new_storage + i) = init_value;
        
        // cout << "*(new_storage + i): " << *(new_storage + i) << endl;
    }
    return new_storage;
}


int main () {
    int *my_array; // will be allocated by the function
    my_array = create_array (100, 20); // create the array
    cout << *my_array;
    // use it
    delete [] my_array; // be sure to free the storage
    cout << *create_array;
    return 0;
}