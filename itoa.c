#include "main.h"
/**
 * itoa - integer to ascii
 * @a: num
 * @b: base
 *
 * Return: char p
 */
char *itoa(long int a, int b)
{
	static char *arr = "0123456789abcdef";
	static char buffer[50];
	char sgn = 0;
	char *p;
	unsigned long n = a;

	if (a < 0)
	{
		n = -a;
		sgn = '-';
	}
	p = &buffer[49];
	*p = '\0';

	do      {
		*--p = arr[n % b];
		n /= b;
	} while (n != 0);

	if (sgn)
		*--p = sgn;
	return (p);
}
