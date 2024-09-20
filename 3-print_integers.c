#include "main.h"

/**
 * print_int - prints an integer
 *
 * @l: list of arguments passed to printf
 * Return: number of digits printed
 */

int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int count = count_digits(n);

	if (f->space == 1 && f->plus == 0 && n > 0)
		count += _putchar(' ');
	if (f->plus == 1 && n > 0)
		count += _putchar('+');
	if (n <= 0)
		count++;

	print_number(n);
	return (count);
}

/**
 * count_digits - counts the number of digits in a number
 *
 * @n: number
 * Return: number of digits in the number
 */

int count_digits(int n)
{
	unsigned int d = 0;
	unsigned int u;

	if (n < 0)
		u = n * -1;
	else
		u = n;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

/**
 * print_number - function that prints number
 *
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = n * -1;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
