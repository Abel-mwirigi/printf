#include "main.h"
/**
 * _putint - prints integers
 * Return:nothing
 */

void _putint(void)
{
	int num;

	num = va_arg(st.list, int);

	if (num < 0)
	{
		_putchar(num + '0');
		st.count++;
	}
	if (num == 0)
	{
		_putchar('0');
		st.count++;
	}
}
