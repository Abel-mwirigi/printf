#ifndef MAIN_H
#define MAIN_h

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

struct print
{
	int i;
	int j;
	int count;
	va_list list;
	char *str;
	char *format;
} st;

int _printf(const char *format, ...);
int _putchar(char c);
void _putc(void);
void _putint(void);
void _putstr(void);

#endif/* MAIN_H */
