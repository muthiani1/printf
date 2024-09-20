#include "main.h"

/**
 * type_string - prints a string
 * 
 * @l: variable arguments list from printf
 * Return: number of characters printed
 */

int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";
	return(_puts(s));
}
