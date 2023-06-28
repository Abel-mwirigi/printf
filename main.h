#ifndef MAIN_H
#define MAIN_h

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct global
{
	char *c;
	int (*f)(va_list);
}specifier;

int (*checker(char format))(va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list list);
int printint(va_list list);
int printdec(va_list list);
int printstr(va_list list);
void set_int(int a, int *i);

#endif/* MAIN_H */
