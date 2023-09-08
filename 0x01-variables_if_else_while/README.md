## 0x01. C - Variables, if, else, while

## Resources

### Read or watch:

- [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230908%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230908T134108Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=80b00345ab276af5c5d5c5ecd2af5e9ac989a2ed7a65bff5af65879f7e593795) (_You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”._)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

#### man or help:

- `ascii` (_You do not need to learn about `scanf`, `getc`, `getchar`, `EOF`, `EXIT_SUCCESS`, `time`, `rand`, `srand`, `RAND_MAX`, `for` loops, `do...while` loops, functions._)

### Tasks

#### [0-positive_or_negative.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c) - A program that will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

- You can find the source code [here](https://intranet.alxswe.com/rltoken/Dg4SuuP8gvRYnE54wktySg "here")
- The variable `n` will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The number, followed by
        - if the number is greater than 0: `is positive`
        - if the number is 0: `is zero`
        - if the number is less than 0: `is negative`
    - followed by a new line

#### [1-last_digit.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c) - A program that will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

- You can find the source code [here](https://intranet.alxswe.com/rltoken/rud8wr5x6VWeahUtd5P14A "here")
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
    - The string `Last digit of`, followed by
    - `n`, followed by
    - the string `is`, followed by
        - if the last digit of `n` is greater than 5: the string `and is greater than 5`
        - if the last digit of `n` is 0: the string `and is 0`
        - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    - followed by a new line

#### [2-print_alphabet.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c) - A program that prints the alphabet in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

#### [3-print_alphabets.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c) - A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

#### [4-print_alphabt.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c) - A program that prints the alphabet in lowercase, followed by a new line.

- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

#### [5-print_numbers.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c) - A program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

- All your code should be in the `main` function

#### [6-print_numberz.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c) - A program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function

#### [7-print_tebahpla.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c) - A program that prints the lowercase alphabet in reverse, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

#### [8-print_base16.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c) - A program that prints all the numbers of base 16 in lowercase, followed by a new line.

- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

#### [9-print_comb.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c) - A program that prints all possible combinations of single-digit numbers.

- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`

#### [100-print_comb3.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c) - A program that prints all possible different combinations of two digits.

- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- `01` and `10` are considered the same combination of the two digits `0` and `1`
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` five times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

#### [101-print_comb4.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c) - A program that prints all possible different combinations of three digits.

- Numbers must be separated by `,`, followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

#### [102-print_comb5.c](https://github.com/Jerdah/alx-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c) - A program that prints all possible combinations of two two-digit numbers.

- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. `1` should be printed as `01`
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` eight times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

