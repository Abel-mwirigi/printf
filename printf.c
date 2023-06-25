#include "main.h"

/**
 * _printf - prints output according to format
 * @format: character
 * Return:number of printed chars
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	int i = 0;
	va_list list;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
			{
				int c = va_arg(list, int);

				_putchar(c);
				printed_chars++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(list, char *);

				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					printed_chars++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				printed_chars++;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(list);
	return (printed_chars);
}
