#include "main.h"

/**
 * convert_base - converts input into desired base
 *
 * @num: input number
 * @base: target base
 * @uppercase: choose print from flag
 * Return: result string
 */

char *convert_base(unsigned long int num, int base, int uppercase)
{
	char *rep;
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	rep = (uppercase) ? "0123456789ABCDEF" : "0123456789abcdef";

	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
