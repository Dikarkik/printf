#include "holberton.h"

/**
 * check_type - check if c match with some format,
 * and call a print function to print arguments.
 * @c: char.
 * @arguments: va_list variable.
 * Return: 1 if c match with some format. 0 otherwise.
 */
int check_type(char c, va_list arguments)
{
	char p_symbol = '%';
	int i_type = 0;
	var_type_t type_list[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_di},
		{'i', print_di}
	};

	while (type_list[i_type].name)
	{
		if (c == '%')
		{
			write(1, &p_symbol, 1);
			return (1);
		}

		if (c == type_list[i_type].name)
		{
			type_list[i_type].fun(arguments);
			return (1);
		}

		i_type++;
	}

	return (0);
}
