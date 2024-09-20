#include "main.h"

/**
 * type_char - prints a character
 *
 * @l: variable arguments list from printf
 * Return: number of characters printed
 */

int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
