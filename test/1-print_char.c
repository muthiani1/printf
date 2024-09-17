#include "main.h"

/**
 * type_char - prints a character
 *
 * @l: variable arguments list from printf
 * Return: number of characters printed
 */

int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
