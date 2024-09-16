#include "main.h"

/**
 * _printf - Produces formatted output
 *
 * @format: string of characters to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	const char *p;
	int count = 0;
	int (*fp)(va_list);
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && (format[1] == ' ' && !format[2]))
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			fp = get_type(*p);
			count += (fp) ? fp(args) : _printf("%%%c");
		}
		else
		{
			count += _putchar(*p);
		}
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
