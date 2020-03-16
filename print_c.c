#include "holberton.h"

/**
 * print_c - print the value of arguments.
 * @arguments: va_list variable that contains a char.
 * @p_total: pointer to total_printed.
 * Return: void.
 */
void print_c(va_list arguments, int *p_total)
{
	char c = va_arg(arguments, int);

	_putchar(c, p_total);
}
