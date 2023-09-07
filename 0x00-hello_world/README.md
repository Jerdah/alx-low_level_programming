## 0x00. C - Hello, World

## Resources

### Read or watch:

- [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230907%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230907T141826Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=877dd411a77e08d82407a3d1f2dcb228ff788a0675ca730098096374b7ac8728)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie")
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) 
- [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus) 

#### man or help:

- `gcc`
- `printf (3)`
- `puts`
- `putchar`

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program

### Tasks

#### [0-preprocessor]() - A script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

#### [1-compiler]() - A script that compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.o`

#### [2-assembler]() - A script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`

#### [3-name]() - A script that compiles a C file and creates an executable named `cisfun`.

- The C file name will be saved in the variable `$CFILE`

#### [4-puts.c]() - A C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

- Use the function `puts`
- You are not allowed to use `printf`
- Your program should end with the value `0`

#### [5-printf.c]() - A C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return `0`
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option

#### [100-intel]() - A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`

#### [101-quote.c]() - A C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall` `gcc` option
