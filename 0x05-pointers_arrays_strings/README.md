## 0x05. C - Pointers, arrays and strings

## Concepts
- [Pointers and arrays](https://intranet.alxswe.com/concepts/60)
- [Data Structures](https://intranet.alxswe.com/concepts/120);
      - [Tutorials Point](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm)
      - [Geeks for Geeks](https://www.geeksforgeeks.org/data-structures/)
      - How to Select the Appropriate Data Structure:
               - [Career Drill](https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/)

## Resources

### Read or watch:

- [C - Arrays](https://intranet.alxswe.com/rltoken/PVi2XMuApOK3jfhsoqsyXw "C - Arrays")
- [C - Pointers](https://intranet.alxswe.com/rltoken/oyHybzYBeFiLUMALpb_usA "C - Pointers")
- [C - Strings](https://intranet.alxswe.com/rltoken/sUeh9qDyW9pePOfJIpx_Bw "C - Strings")
- [Memory Layout](https://intranet.alxswe.com/rltoken/0k6CD2ZMzSFOMUxMOBiAlQ "Memory Layout")


### Tasks

#### [0-reset_to_98.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)

- Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

- Prototype: `void reset_to_98(int *n);`

#### [1-swap.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)

- Write a function that swaps the values of two integers.

- Prototype: `void swap_int(int *a, int *b);`

#### [2-strlen.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)

- Write a function that returns the length of a string.

- Prototype: `int _strlen(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

#### [3-puts.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)

- Write a function that prints a string, followed by a new line, to `stdout`.

- Prototype: `void _puts(char *str);`

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

#### [4-print_rev.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)

- Write a function that prints a string, in reverse, followed by a new line.

- Prototype: `void print_rev(char *s);`

#### [5-rev_string.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)

- Write a function that reverses a string.

- Prototype: `void rev_string(char *s);`

#### [6-puts2.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)

- Write a function that prints every other character of a string, starting with the first character, followed by a new line.

- Prototype: `void puts2(char *str);`

#### [7-puts_half.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)

- Write a function that prints half of a string, followed by a new line.

- Prototype: `void puts_half(char *str);`
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

#### [8-print_array.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)

- Write a function that prints `n` elements of an array of integers, followed by a new line.

- Prototype: `void print_array(int *a, int n);`  
    
- where `n` is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use `printf`

#### [9-strcpy.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)

- Prototype: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

- Return value: the pointer to `dest`

FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

#### [100-atoi.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c)

- Write a function that convert a string to an integer.

- Prototype: `int _atoi(char *s);`
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the `-` and `+` signs before the number
- If there are no numbers in the string, the function must return `0`
- You are not allowed to use `long`
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

#### [101-keygen.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/101-keygen.c)

- Create a program that generates random valid passwords for the program [101-crackme](https://github.com/alx-tools/0x04.c "101-crackme").

- You are allowed to use the standard library
- You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
- man `srand`, `rand`, `time`
- `gdb` and `objdump` can help

