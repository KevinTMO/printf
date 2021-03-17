## _Printf
- Prints formatted string and data to standart output

# General requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Dont forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

### More Info / Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

#$# Compilation process
- This code will be compiled this way:

:bangbang: $ gcc -Wall -Werror -Wextra -pedantic *.c

#### How to implement & call the _printf function

Make sure to #include the 'holberton.h' library

Examples:

_printf("Hi! My name is %s", myName);
_printf("My grade is %c", myGrade);
_printf("I am %d happy and next year I will be %i years old", myPercent, myAge)

Outputs:

Hi! my Name is Kevin
My grade is A
I am 100% happy and next year I will be 20 years old
