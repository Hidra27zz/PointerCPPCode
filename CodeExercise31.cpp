// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.



    //-- Write your code below this line 

int find_max_element(int* array, int size) {
    int max = *array;
    for (int i = 0; i < size; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }
    return max;
}
    //-- Write your code below this line 