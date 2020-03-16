#include "holberton.h"

/**
 * print_s - print the value of arguments.
 * @arguments: va_list variable that contains a string.
 * Return: void.
 */
void print_s(va_list arguments)
{
        char *str = va_arg(arguments, char *);

	write(1, str, 6);
}
