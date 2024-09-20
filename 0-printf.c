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
	int (*fp)(va_list, flags_t *);
	va_list args;
	flags_t flags = {0, 0, 0};

	register int count = 0;

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
			while (get_flags(*p, &flags))
				p++;
			fp = get_type(*p);
			count += (fp) ? fp(args, &flags) : _printf("%%%c", *p);
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
