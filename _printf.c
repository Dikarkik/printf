#include "holberton.h"

/**
 * _printf - produce ouput according to a format.
 * @format: string that specifies how subsequent.
 * arguments are converter for ouput.
 * Return: total number of characters printed.
 * Or negarive value if an output error or an encoding error.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int index = 0;
	int total_printed = 0;
	int *p_total = &total_printed;

	va_start(arguments, format);

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			if (check_type(format[index + 1], arguments, p_total) == 1)
				index++;
			else
			{
				_putchar('%', p_total);
			}
		}

		else
		{
			_putchar(format[index], p_total);
		}

		index++;
	}

	va_end(arguments);
	return (*p_total);
}
