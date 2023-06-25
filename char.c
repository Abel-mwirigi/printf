#include "main.h"
/**
 * _putc - prints characters
 * Return:nothing
 */

void _putc(void)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	st.count++;
}
