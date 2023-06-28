#include "main.h"

/**
* print_binary - converts the unsigned int argument to binary and prints
* to standard output
* @list: argument values
* Return: count
*/

int print_binary(va_list list)
{
	unsigned int i, count, num, binary, array[32];

	i = 0, count = 0;
	num = va_arg(list, int);

	if (num < 1)
	{
		_putchar('0');
		count++;
		return (count);
	}
	else
	{
		while (num > 0)
		{
			binary = num % 2;
			num /= 2;
			array[count] = binary;
			count++;
		}
		for (i = count - 1; i > 0; i--)
		{
			_putchar('0' + array[i]);
		}
		_putchar('0' + array[i]);
	}
	return (count);
}
