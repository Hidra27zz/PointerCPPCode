// int *dont_do_this () {
//     int size {};
//     ...
//     return &size;
// }
// int *or_this () {
//     int size {};
//     int *int_ptr {&size};
//     ...
//     return int_ptr;
// }