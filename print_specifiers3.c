#include "main.h"

/**
  *print_hex_binary - printbinary of numbers
  *@args: binary
  *Return: count on success
  */

int print_hex_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, count = 0;
	int significant_digits = sizeof(num) * 8;

	for (i = significant_digits - 1; i >= 0; i--)
	{
		if (num & (1u << i))
			break;
	}
	if (i < 0)
	{
		putchar('0');
		return (1);
	}

	for (; i >= 0; i--)
	{
		putchar((num & (1u << i)) ? '1' : '0');
		count++;
	}
	return (count);
}
