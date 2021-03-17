#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

#define SP_CH '%'

int _putchar(char c);
int _printf(const char *format, ...);
int _printChar(va_list args);
int _printStr(va_list args);
int _printDec(va_list args);
int _putstring(char *s);
int _strlen(char *s);

#endif /* HOLBERTON_H */
