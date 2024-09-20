#include "main.h"

/**
 * print_address - handles the %p format specifier
 *
 * @l: list of arguments passed to printf
 * @f: flags
 * Return: number of characters printed
 */

int print_address(va_list l, flags_t *f)
{
	char *str;
	int count = 0;
	unsigned long int p = va_arg(l, unsigned long int);

	if (!p)
		return (_puts("(nil)"));

	(void)f;

	str = convert_base(p, 16, 0);
	count += (_puts("0x"));
	count += (_puts(str));
	return (count);
}
