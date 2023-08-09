// Section 12
// Return Pointer

#include <iostream>

using namespace std; 

int *create_array (size_t size, int init_value = 0) {
    int *new_storage {nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
      *(new_storage + i) = init_value;
   return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n--------------------------------------" << endl;

    display(my_array, size);
    delete [] my_array;
    return 0;
}
/*
- `size_t` is an unsigned integral data type used in C++ to represent the size of objects in memory. It is typically used to obtain the size of an array or to calculate the number of elements in a container. The exact size of `size_t` depends on the implementation, but it is guaranteed to be large enough to represent the maximum size of any object in memory.

- The `new` operator in C++ is used to dynamically allocate memory for objects at runtime. It is used to create objects on the heap, which allows the program to manage memory dynamically. When using `new`, memory is allocated for the object and its constructor is called to initialize the object. The `new` operator returns a pointer to the newly allocated object. The `new` operator is accompanied by the `delete` operator to deallocate the memory and destroy the object when it is no longer needed.
*/