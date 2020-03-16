#include "holberton.h"

/**
 * print_number - print a number to stdout.
 * @n: number
 * Return: void.
 */
void print_number(int n)

{
	int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
