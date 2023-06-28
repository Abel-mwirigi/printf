#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printchar - prints character
 * @list:variable list
 * Return: 0 success
 */

int printchar(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/**
 * set_int - use recursion
 * @a: first argument
 * @i: second argument
 * Return: void
 */

void set_int(int a, int *i)
{
	if (a < 0)
	{
		_putchar('-');
		(*i)++;
		a = -a;
	}
	if (a / 10)
	{
		set_int(a / 10, i);
	}
	_putchar((a % 10) + '0');
	(*i)++;
}


/**
 * printint - print integer
 * @list:variable list
 * Return: 0 success
 */

int printint(va_list list)
{
	int i, a;

	a = va_arg(list, int);
	i = 0;

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}

	if (a == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		set_int(147483648, &i);
		i += 2;
		return (i);
	}
	set_int(a, &i);
	return (i);
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
	return (i);
}
