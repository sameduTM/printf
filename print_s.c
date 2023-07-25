#include "main.h"
/**
 * print_s - Prints string
 * @args: number of elements
 *
 * Return: length of string.
 */
int print_s(va_list args)
{
	char *c;
	int len;

	c = va_arg(args, char*);
	len = print((c != NULL) ? c : "(null)");

	return (len);
}
