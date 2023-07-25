#include "main.h"
#include <stdio.h>
/**
 * format_checker - Format controller
 * @str: String format
 * @list: List of arguments
 *
 * Return: Total size of arguments with the total size of the base string
 **/

int format_checker(const char *str, va_list args)
{
	int i, count, a;

	count = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			a = xter_checker(str, args, &i);
			if (a == -1)
				return (-1);

			count += a;
			continue;
		}
		_putchar(str[i]);
	}
	return (count);
}
/**
 * xter_checker - Controller for percent format
 * @str: String format
 * @list: List of arguments
 * @i: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/

int xter_checker(const char *str, va_list args, int *i)
{
	int count, j, _format;
	format formats[] = {
		{'s', print_s}, {'c', print_c},
		{'d', print_i}, {'i', print_i}
	};
	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);
	if (str[*i] == '\0')
	{
		_putchar('%');
		return (1);
	}
	_format = sizeof(formats) / sizeof(formats[0]);
	for (count = j = 0; j < _format; j++)
	{
		if (str[*i] == formats[j].type)
		{
			count = formats[j].f(args);
			return (count);
		}
	}
	_putchar('%'), _putchar(str[*i]);

	return (2);
}
