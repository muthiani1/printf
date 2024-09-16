#include "main.h"

/**
 * _printf - Produces formatted output
 *
 * @format: string of characters to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, k, count = 0;
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
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(null)";
					k = 0;
					while ((buffer[j] = str[k]) != '\0')
					{
						j++;
						k++;
					}
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
		i++;
		j++;
	}
	buffer[j] = '\0';

	return (j);
	va_end(args);
}
