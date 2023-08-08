// for (auto ...) { } is a loop structure in C++, known as the range-based loop. This structure is used to iterate over the elements of the range, such as array, vector, linked list or the other scopes auto define.
// the syntax "auto" in for loop is used to automatically deduce the data type of the elements within the range which they're iterating. this helps simplify the declaration of variables to store the value of the elements and helps the code more flexible .
//Ví dụ:
/* ```
std::vector<int> numbers = {1, 2, 3, 4, 5};
for (auto number : numbers) {
    std::cout << number << " "; // In ra các số từ mảng numbers
}
```
*/
// Trong ví dụ trên, vòng lặp dựa trên phạm vi sẽ lặp qua tất cả các phần tử trong mảng `numbers` và gán giá trị của phần tử đó cho biến `number` tự động. Điều này cho phép chúng ta truy xuất và sử dụng giá trị của từng phần tử trong mảng một cách dễ dàng."


