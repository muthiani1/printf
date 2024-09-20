#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct flags - used to turn on _printf flags
 *
 * @plus: turned on when '+' present
 * @space: turned on when ' ' present
 * @hash: turned on when '#' present
 */

typedef struct flags {
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct type_handler - contains function pointers corresponsing to
 * correct format specifier passed to _printf
 * @c: format specifier
 * @f: function pointer
 */

typedef struct type_handler {
	char c;
	int (*f)(va_list, flags_t *);
} type_h;


int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
char *convert_base(unsigned long int n, int base, int uppercase);
int (*get_type(char s))(va_list, flags_t *f);
int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
int count_digits(int n);
void print_number(int n);
int print_binary(va_list l, flags_t *f);
int print_unsigned(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hexBig(va_list l, flags_t *f);
int print_custom(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int get_flags(char s, flags_t *f);

#endif /* MAIN_H */
