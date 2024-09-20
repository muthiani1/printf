#include "main.h"

/**
 * print_hex - handles %x specifier
 *
 * @l: arguments list passed to _printf
 * Return: number of characters printed
 */

int print_hex(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 16, 0);

	return (_puts(str));
}

/**
 * print_hexBig - handles %X format specifier
 *
 * @l: arguments list provided to _printf
 * Return: number of character printed
 */

int print_hexBig(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 16, 1);

	return (_puts(str));
}
