#include "main.h"
/**
 * _printf - outputs according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	if (format == NULL)
		return (-1);

	count = _strlen(format);
	if (count <= 0)
		return (0);

	va_start(args, format);
	count = format_checker(format, args);

	_putchar(-1);
	va_end(args);

	return (count);
}
