#include "holberton.h"

/**
 * print_di - print the value of arguments.
 * @arguments: va_list variable that contains a number.
 * @p_total: pointer to total_printed.
 * Return: void.
 */
void print_di(va_list arguments, int *p_total)
{
	int n;

	n = va_arg(arguments, int);
	print_number(n, p_total);
}
