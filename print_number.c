#include "holberton.h"

/**
 * print_number - print a number to stdout.
 * @n: number.
 * @p_total: pointer to total_printed.
 * Return: void.
 */
void print_number(int n, int *p_total)

{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('-', p_total);
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10, p_total);

	_putchar((num % 10) + '0', p_total);
}
