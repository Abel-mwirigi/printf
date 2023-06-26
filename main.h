#ifndef MAIN_H
#define MAIN_h

#include <stdarg.h>
#include <stdlib.h>
#include<stddef.h>
#include <unistd.h>

typedef struct global
{
	char *c;
	int (*f)(va_list);
}specifier;

int (*checker(const char *format))(va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list list);
int printint(va_list list);
int printstr(va_list list);

#endif/* MAIN_H */
