#include "main.h"

/**
 * print_binary - prints unsigned integer as binary
 *
 * @l: list of arguments passed to _printf
 * Return: number of characters printed
 */

int print_binary(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert_base(num, 2, 0);

	return (_puts(str));
}
