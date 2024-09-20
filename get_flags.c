#include "main.h"

/**
 * get_flags - handles flags for non-custom conversion specifiers
 *
 * @s: flag character
 * @f: flag structure
 * Return: 1 if flag is turned on 0 if not
 */

int get_flags(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
