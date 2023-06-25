#include "main.h"
/**
 * _putstr - prints strings
 * Return:nothing
 */

void _putstr(void)
{
	st.str = va_arg(st.list, char *);
	if (st.str == NULL)
		st.str = "(null)";
	else
	{
		st.i = 0;
		while (st.str[st.i] != '\0')
		{
			_putchar(st.str[st.i]);
			st.j++;
			st.count++;
		}
	}
}
