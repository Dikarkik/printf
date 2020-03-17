#include "holberton.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * @p_total: pointer to total_printed.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int *p_total)
{
	int result_write = 0;

	result_write = write(1, &c, 1);

	if (result_write == 1)
	{
		*p_total = *p_total + 1;
		return (1);
	}

	return (0);
}
