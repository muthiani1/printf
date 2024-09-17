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

	char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = (num % 2) + '0';
		num /= 2;
	} while (num != 0);

	return (_puts(ptr));
}
