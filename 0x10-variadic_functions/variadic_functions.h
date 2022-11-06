#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void pr_int(va_list val);
void pr_char(va_list val);
void pr_float(va_list val);
void pr_str(va_list val);

typedef struct p_op
{
	char *op;
	void (*f)();
}p_op;

#endif
