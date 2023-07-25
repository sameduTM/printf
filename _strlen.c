#include "main.h"
/**
 * _strlen - finds length of string
 * @str: pointer to string
 *
 * Return: Length of string
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}
