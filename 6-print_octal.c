#include "main.h"

/**
 * print_octal - handles %o specifier
 *
 * @l: arguments list passed to printf
 * Return: number of characters printed
 */

int print_octal(va_list l)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 8, 0);

	return (_puts(str));
}
