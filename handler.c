#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>
#include "main.h"
/**
 * checker - checks the format specifier
 * @format:argument that precedes the list
 * Return:0 success
 */
int (*checker(const char *format))(va_list list)
{
	specifier ar[] = {
		{"c", printchar},
		{"s", printstr},
		{"d", printint},
		{"i", printint},
		{NULL, NULL}
	};
	int i = 0;

	while (ar[i].c != NULL)
	{
		if (*(ar[i].c) == *format)
		{
			return (ar[i].f);
		}
		i++;
	}
	return (0);
}
