#include "main.h"

/**
* print_binary - converts the unsigned int argument to binary and prints
* to standard output
* @list: argument values
* Return: count
*/

int print_binary(va_list list)
{
	int count;
	unsigned int n = va_arg(list, int);

	count = 0;
	count += printbase_bin(n);

	return (count);

}

/**
 * printbase_bin - print numbers
 * @num: base
 *
 * Return: int printed
 */
char printbase_bin(unsigned int num)
{
	int count;

	count = 0;
	if (num / 2)
		count += printbase_bin(num / 2);
	count += _putchar(num % 2 + '0');
	return (count);

}
