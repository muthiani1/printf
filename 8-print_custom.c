#include "main.h"

/**
 * print_custom - handles custom format specifier %S
 *
 * @l: list of arguments passed to _print
 * @f: flags
 * Return: number of characters printed
 */

int print_custom(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		count += _puts("(null)");

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			count += _puts("\\x");
			res = convert_base(s[i], 16, 1);
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}
	return (count);
}
