#include "holberton.h"

/**
 * check_spaces_flag - call _putchar based on a flag.
 * @p_spaces_flag: the flag.
 * @c: char.
 * @p_total: pointer to total_printed.
 * Return: always void.
 */
void check_spaces_flag(int *p_spaces_flag, char c, int *p_total)
{
	if (*p_spaces_flag == 1)
	{
		*p_spaces_flag = 0;
		_putchar(' ', p_total);
	}
	else
		_putchar(c, p_total);
}
/**
 * _printf - produce ouput according to a format.
 * @format: string that specifies how subsequent.
 * arguments are converter for ouput.
 * Return: total number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list arguments;
	int index = 0;
	int total_printed = 0;
	int *p_total = &total_printed;
	int spaces_flag = 0;
	int *p_spaces_flag = &spaces_flag;

	va_start(arguments, format);

	while (format && format[index])
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == ' ')
			{
				spaces_flag = 1;

				while (format[index + 1] == ' ')
				index++;
			}
			if (check_type(format[index + 1], arguments, p_total) == 1)
			{
				index++;
				spaces_flag = 0;
			}
			else
			{
				_putchar('%', p_total);
			}
		}
		else
		{
			check_spaces_flag(p_spaces_flag, format[index], p_total);
		}

		index++;
	}

	va_end(arguments);
	return (*p_total);
}
