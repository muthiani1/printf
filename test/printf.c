#include "main.h"

/**
 * _printf - Produces formatted output
 *
 * @format: string of characters to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, k;
	char buffer[1000];
	char *str;
	va_list args;

	va_start(args, format);

	i = j = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					buffer[j] = va_arg(args, int);
					i++;
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					k = 0;
					while ((buffer[j] = str[k]) != '\0')
					{
						_putchar(buffer[j]);
						j++;
						k++;
					}
					i++;
					break;
				case '%':
					buffer[j] = '%';
					break;
				default:
					i++;
					continue;
			}
		}
		else
		{
			buffer[j] = format[i];
		}
		_putchar(buffer[j]);
		i++;
		j++;
	}
	buffer[j] = '\0';

	printf("%s\n", buffer);
	return (j);
	va_end(args);
}
