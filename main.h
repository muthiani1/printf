#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct type_handler - contains function pointers corresponsing to
 * correct format specifier passed to _printf
 * @c: format specifier
 * @f: function pointer
 */

typedef struct type_handler
{
	char c;
	int (*f)(va_list);
} type_h;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int (*get_type(char s))(va_list);
int print_char(va_list l);
int print_string(va_list l);

#endif /* MAIN_H */
