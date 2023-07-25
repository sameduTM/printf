#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *, ...);
int _putchar(char);
int print_s(va_list);
int print_c(va_list);
int print_i(va_list);
int format_checker(const char *, va_list);
int xter_checker(const char *, va_list, int *);
int _strlen(const char *);
char *itoa(long int, int);
int buffer(char);
int print(char *);

/**
 * struct _format - typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
