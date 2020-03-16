#include "holberton.h"

/**
 * print_c - print the value of arguments.
 * @arguments: va_list variable that contains a char.
 * Return: void.
 */
void print_c(va_list arguments)
{
        char c = va_arg(arguments, int);

        write(1, &c, 1);
}
