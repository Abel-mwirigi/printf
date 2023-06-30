#include "main.h"

/**
 * printchar - prints character
 * @list:variable list
 * Return: 0 success
 */

int printchar(va_list list)
{
	int c = va_arg(list, int);

	return (_putchar(c));
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
* printdec - prints a decimal number to standard output
* @list: the list of integers to be printed
* Return: the number of characters printed
*/

int printdec(va_list list)
{
	unsigned int abs, aux, zero, count;
	int num;

	count = 0;

	num = va_arg(list, int);
	if (num < 0)
	{
		abs = (num * -1);
		count += _putchar('-');
	}
	else
		abs = num;

	aux = abs;
	zero = 1;
	while (aux > 9)
	{
		aux /= 10;
		zero *= 10;
	}

	while (zero >= 1)
	{
		count += _putchar(((abs / zero) % 10) + '0');
		zero /= 10;
	}
	return (count);
}


/**
 * printint - print integer
 * @list:variable list
 * Return: 0 success
 */

int printint(va_list list)
{
	return (printdec(list));
}


/**
 * printstr - prints string
 * @list:variable list
 * Return: 0 success
 */

int printstr(va_list list)
{
	char *s;
	int i = 0, count = 0;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		count += _putchar(s[i]);
		i++;
	}
	return (count);
}
