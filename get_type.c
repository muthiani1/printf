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
		{'c', print_char},
		{'s', print_string},
	};
	int flags = 2;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
