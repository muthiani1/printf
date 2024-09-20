#include "main.h"

/**
 * print_hex - handles %x specifier
 *
 * @l: arguments list passed to _printf
 * Return: number of characters printed
 */

int print_hex(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
		count += _puts("0x");

	count += _puts(str);
	return (count);
}

/**
 * print_hexBig - handles %X format specifier
 *
 * @l: arguments list provided to _printf
 * Return: number of character printed
 */

int print_hexBig(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
		count += _puts("0X");

	count += _puts(str);
	return (_puts(str));
}
