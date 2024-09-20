#include "main.h"

/**
 * type_string - prints a string
 * 
 * @l: variable arguments list from printf
 * Return: number of characters printed
 */

int print_string(va_list l)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	return(_puts(s));
}
