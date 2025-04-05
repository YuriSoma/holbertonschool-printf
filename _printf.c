#include "main.h"

/**
 * _printf - simulate printf function in the std library.
 * @format: passed string which contains 0 or more %.
 *
 * Return: printed characters count.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char ch, *str;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(ap, int);
					_putchar(ch);
					count++;
					break;
				case 's':
					str = va_arg(ap, char *);
					count += print_string(str);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case '\0':
					return (-1);
				default:
					goto Here;
			}
			i += 2;
			continue;
		}
Here:
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(ap);
	return (count);
}
