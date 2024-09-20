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

typedef struct type_handler {
	char c;
	int (*f)(va_list);
} type_h;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
char *convert_base(unsigned long int n, int base, int uppercase);
int (*get_type(char s))(va_list);
int print_char(va_list l);
int print_string(va_list l);
int print_int(va_list l);
int count_digits(int n);
void print_number(int n);
int print_binary(va_list l);
int print_unsigned(va_list l);
int print_octal(va_list l);
int print_hex(va_list l);
int print_hexBig(va_list l);

#endif /* MAIN_H */
