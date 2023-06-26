#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * printchar - prints character
 * @list:variable list
 * Return: 0 success
 */
int printchar(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (0);
}
/**
 * printint - print integer
 * @list:variable list
 * Return: 0 success
 */
int printint(va_list list)
{
	int i;

	i = va_arg(list, int);
	_putchar(i + '0');
	return (0);
}
/**
 * printstr - prints string
 * @list:variable list
 * Return: 0 success
 */
int printstr(va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
