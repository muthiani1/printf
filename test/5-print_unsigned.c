#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 *
 * @l: list of arguments provided to _printf
 * Return: number of character printed
 */

int print_unsigned(va_list l)
{
	unsigned int n;

	n = va_arg(l, unsigned int
