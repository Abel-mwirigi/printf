#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints output according to format
 * @format: character
 * Return:number of printed chars
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0;

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
				count += _putchar('%');
				i++;
			}
			else if (format[i] != '\0')
			{
				if (format[i] == 'c' || format[i] == 's' || format[i] == 'd'
					|| format[i] == 'i')
				{
					count += (*checker(&format[i]))(list);
					i++;
				}
			}
		}
		count += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
