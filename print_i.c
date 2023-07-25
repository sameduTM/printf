#include "main.h"
/**
 * print_i - Print a number in base 10
 * @args: Number to print in base 10
 *
 * Return: Length of the numbers in decimal
 */
int print_i(va_list args)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(args, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
