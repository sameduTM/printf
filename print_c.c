#include "main.h"
/**
 * print_c - print char
 * @args: va_list.
 *
 * Return: Always 1
 */
int print_c(va_list args)
{
	int a;

	a = va_arg(args, int);

	_putchar(a);

	return (1);
}
