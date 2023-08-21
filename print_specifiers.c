#include "main.h"

/**
 *print_character - Print format specifier %c
 *@args: arguments passed to function
 */

void print_character(va_list args)
{
	char c;

	c = va_arg(args, int);
	putchar(c);
}

/**
 *print_percent - print %
 *@args: arguments passed to function
 */

void print_percent(va_list args)
{
	putchar('%');
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

void print_integeri(va_list args)
{
	int i = va_arg(args, int);

	char buffer[20];
	int index = 0;

	if (i == 0)
	{
		putchar('0');
		return;
	}

	if (i < 0)
	{
		putchar('-');
		i = -i;
	}

	while (i > 0)
	{
		buffer[index++] = '0' + (i % 10);
		i /= 10;
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
    char *s = va_arg(args, char*);
    
    if (s == NULL)
    {
        const char *null_str = "(null)";
        while (*null_str)
        {
            putchar(*null_str);
            null_str++;
        }
    }
    else
    {
        while (*s)
        {
            putchar(*s);
            s++;
        }
    }
}
