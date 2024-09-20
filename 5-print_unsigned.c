#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 *
 * @l: list of arguments provided to _printf
 * @f: flags
 * Return: number of character printed
 */

int print_unsigned(va_list l, flags_t *f)
{
	unsigned int n = va_arg(l, unsigned int);
	char *str = convert_base(n, 10, 0);
	(void)f;

	return (_puts(str));
}
