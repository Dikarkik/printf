#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int check_type(char c, va_list arguments, int *p_total);
void check_spaces_flag(int *p_spaces_flag, char c, int *p_total);
int _putchar(char c, int *p_total);
void print_c(va_list arguments, int *p_total);
void print_s(va_list arguments, int *p_total);
void print_di(va_list arguments, int *p_total);
void print_number(int n, int *p_total);

/**
 * struct var_type - type var format.
 * @name: name format.
 * @fun: function that prints some value.
 * Description: Used to compare the format.
 */
typedef struct var_type
{
	char name;
	void (*fun)(va_list, int *);
} var_type_t;

#endif /* HOLBERTON_H */
