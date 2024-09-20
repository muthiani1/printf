#include "main.h"

/**
 * get_type - selects the right printing function
 * based on format specifier provided to _printf
 * @s: character holding format specifier
 * Return: fucntion pointer to correct print function
 */

int (*get_type(char s))(va_list)
{
	int i;
	type_h func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hexBig},
		{'S', print_custom}
	};
	int flags = 10;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
