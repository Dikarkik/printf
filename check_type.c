#include "holberton.h"

int check_type(char c, va_list arguments)
{
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
                        char c = '%';
                        write(1, &c, 1);
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
