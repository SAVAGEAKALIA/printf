#include "main.h"
/**
  *print_unsigned_integer - function to print unsigned integer
  *@args: arguments to function
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
  *print_octal - function to print in base 8
  *@args: arguments to function
  */

void print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int index = 0;

	if (num == 0)
	{
		putchar('0');
		return;
	}

	while (num > 0)
	{
	buffer[index++] = '0' + (num % 8);
	num /= 8;
	}

	while (index > 0)
	{
	putchar(buffer[--index]);
	}
}

/**
  *print_hex_lower - print hexadecimal lower
  *@args: argument to function
  */
void print_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int index = 0;

	if (num == 0)
	{
		putchar('0');
		return;
	}

	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			buffer[index++] = '0' + remainder;
		}
		else
		{
			buffer[index++] = 'a' + (remainder - 10);
		}
		num /= 16;
	}

	while (index > 0)
	{
		putchar(buffer[--index]);
	}
}

/**
  *print_hex_upper - print hexadecimal upper
  *@args: argument to function
  */

void print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int index = 0;

	if (num == 0)
	{
		putchar('0');
		return;
	}

	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
			buffer[index++] = '0' + remainder;
		else
			buffer[index++] = 'A' + (remainder - 10);
		num /= 16;
	}

	while (index > 0)
	{
	putchar(buffer[--index]);
	}
}

/**
  *print_pointer - print address pointer points to
  *@args: argument to function
  */

void print_pointer(va_list args)
{
	intptr_t ptr = (intptr_t) va_arg(args, void *);
	char buffer[20];
	int index = 0;

	putchar('0');
	putchar('x');


	if (ptr == 0)
	{
		putchar('0');
		return;
	}

	while (ptr > 0)
	{
		int remainder = ptr % 16;

		if (remainder < 10)
		buffer[index++] = '0' + remainder;
		else
		buffer[index++] = 'a' + (remainder - 10);
		ptr /= 16;
	}

	while (index > 0)
	{
		putchar(buffer[--index]);
	}
}
