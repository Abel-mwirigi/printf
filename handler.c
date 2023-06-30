#include "main.h"

/**
 * print_type - checks the format specifier
 * @format:argument that precedes the list
 * Return:0 success
 */
int (*print_type(char format))(va_list list)
{
	specifier ar[] = {
		{"c", printchar},
		{"s", printstr},
		{"d", printdec},
		{"i", printint},
		{"b", print_binary},
		{NULL, NULL}
	};
	int i = 0;

	while (ar[i].c != NULL)
	{
		if (*ar[i].c == format)
		{
			return (ar[i].f);
		}
		i++;
	}
	return (NULL);
}
