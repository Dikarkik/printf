#include "holberton.h"

/**
 * print_s - print the value of arguments.
 * @arguments: va_list variable that contains a string.
 * @p_total: pointer to total_printed.
 * Return: void.
 */
void print_s(va_list arguments, int *p_total)
{
	char *str = va_arg(arguments, char *);
	int len = 0;
	int index = 0;

	if (str == NULL || str[0] == '\0')
		return;

	while (str[len])
		len++;

	for (index = 0; index < len; index++)
		_putchar(str[index], p_total);
}
