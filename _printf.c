#include "main.h"

/**
 * _printf - prints output according to format
 * @format: character
 * Return:number of printed chars
 */
int _printf(const char *format, ...)
{
	int count = 0;

	if (format != NULL)
	{
		int i;
		va_list list;
		int (*f)(va_list);

		va_start(list, format);
		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '%')
				{
					count += _putchar(format[i]);
				}
				else
				{
					count += (*print_type(format[i]))(list);
				}
			}
			else
				count += _putchar(format[i]);
			i++;
		}
		va_end(list);
	}
	return (count);
}
