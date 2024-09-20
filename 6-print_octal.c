#include "main.h"

/**
 * print_octal - handles %o specifier
 *
 * @l: arguments list passed to printf
 * Return: number of characters printed
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
		count += _putchar('0');

	count += _puts(str);
	return (count);
}
