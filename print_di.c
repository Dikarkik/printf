#include "holberton.h"

/**
 * print_di - print the value of arguments.
 * @arguments: va_list variable that contains a number.
 * Return: void.
 */
void print_di(va_list arguments)
{
        int n;

        n = va_arg(arguments, int);
        print_number(n);
}
