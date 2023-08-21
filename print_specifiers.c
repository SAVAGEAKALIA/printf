#include "main.h"

/**
 *print_character - Print format specifier %c
 *@args: arguments passed to function
 */

void print_character(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
}

/**
 *print_percent - print %
 *@args: arguments passed to function
 */

void print_percent(va_list args)
{
	char percent = '%';

	write(1, &percent, 1);
	(void)args;
}


/**
 *print_integer - print integer where seen
 *@args: arguments passed to function
 */

void print_integer(va_list args)
{
	int d = va_arg(args, int);

	char buffer[20];
	int index = 0;

	if (d == 0)
	{
		putchar('0');
		return;
	}

	if (d < 0)
	{
		putchar('-');
		d = -d;
	}

	while (d > 0)
	{
		buffer[index++] = '0' + (d % 10);
		d /= 10;
	}

	while (index > 0)
	{
		putchar(buffer[--index]);
	}
}

/**
 * print_unsigned_integer - print unsigned integer from va_list
 * @args: va_list containing the unsigned integer to print
 */

void print_unsigned_integer(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	char buffer[20];
	int index = 0;

	if (u == 0)
	{
		putchar('0');
		return;
	}

	while (u > 0)
	{
		buffer[index++] = '0' + (u % 10);
		u /= 10;
	}

	while (index > 0)
	{
		putchar(buffer[--index]);
	}
}


/**
 *print_string - prints a string from va_list
 *@args: va_list containing the string to print
 */

void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);

	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}
