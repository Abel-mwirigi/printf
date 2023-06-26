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
	unsigned long int i = 0;
	unsigned long int count = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;

			if (format[i] == 'c' || format[i] == 's' || format[i] == 'd' || format[i] == 'i')
			{
				count += 1;
				(*checker(&format[i]))(list);
				i++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(list);
	return (count);
}
