#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct global - create a global function
 * @c: the specifier
 * @f: pointer function to be carried out
 */

typedef struct global
{
	char *c;
	int (*f)(va_list);
} specifier;

int (*print_type(char format))(va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list list);
int printint(va_list list);
int printdec(va_list list);
int printstr(va_list list);
void set_int(int a, int *i);
int print_binary(va_list list);

#endif /* MAIN_H */
