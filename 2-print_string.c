#include "main.h"

/**
 * print_string - prints a string
 *
 * @l: variable arguments list from _print
 * @f: flags
 * Return: number of characters printed
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	return (_puts(s));
}
