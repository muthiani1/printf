#include "main.h"

/**
 * _puts - a function that takes a pointer to an int as parameter and
 * @str: chaine of caractere
 *
 * Return: 1 or 0
 */

int _puts(char *str)
{
	register int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
