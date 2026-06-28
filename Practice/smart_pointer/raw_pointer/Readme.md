Using a raw pointer to demonstrate a heap memory leak when we forget to delete allocated memory after use dynamic allocated  


You can use valgrind to see the detail of memory leak

For example:

mkdir build && cd build  
cmake .. && make  
valgrind ./raw_pointer  