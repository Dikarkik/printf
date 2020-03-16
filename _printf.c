#include "holberton.h"

/**
 * _printf - produce ouput according to a format.
 * @format: string that specifies how subsequent
 * arguments are converter for ouput.
 * Return: total number of characters printed.
 * Or negarive value if an output error or an encoding error.
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int i_format = 0;

	va_start(arguments, format);

	while (format && format[i_format])
	{
		if (format[i_format] == '%')
		{
			if (check_type(format[i_format + 1], arguments) == 1)
			{
				i_format++;
			}
		}
		else
		{
			_putchar(format[i_format]);
		}

		i_format++;
	}

	va_end(arguments);
	return (0);
}
