#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int check_type(char c, va_list arguments);
void print_c(va_list arguments);
void print_s(va_list arguments);
void print_di(va_list arguments);
void print_number(int n);

/**
 * struct var_type - type var format.
 * @name: name format.
 * @fun: function that prints some value.
 * Description: Used to compare the format.
 */
typedef struct var_type
{
	char name;
	void (*fun)();
} var_type_t;

#endif /* HOLBERTON_H */
