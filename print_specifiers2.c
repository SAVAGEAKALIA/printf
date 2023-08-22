#include "main.h"
/**
  *print_unsigned_integer -print unsigned integer
  *@args: unsigned integer
  */

void print_unsigned_integer(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, len;
	char buffer[32];

	len = snprintf(buffer, sizeof(buffer), "%u", num);
	for (i = 0; i < len; i++)
		putchar(buffer[i]);

}
/**
  *print_octal - print Octal
  *@args: octal
  */

void print_octal(va_list args)
{
	int num = va_arg(args, int);
	int i, len;
	char buffer[32];

	len = snprintf(buffer, sizeof(buffer), "%o", num);
	for (i = 0; i < len; i++)
		putchar(buffer[i]);

}
/**
  *print_hex_lower - print hex lower
  *@args: hex lower
  */

void print_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, len;
	char buffer[32];

	len = snprintf(buffer, sizeof(buffer), "%x", num);
	for (i = 0; i < len; i++)
		putchar(tolower(buffer[i]));
}

/**
  *print_hex_upper -print hex upper
  *@args: hex upper
  */
void print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, len;
	char buffer[32];

	len = snprintf(buffer, sizeof(buffer), "%X", num);
	for (i = 0; i < len; i++)
		putchar(buffer[i]);
}
/**
  *print_pointer - print pointer
  *@args: pointer
  */
void print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	int i;

	char buffer[20];

	snprintf(buffer, sizeof(buffer), "%p", ptr);

	for (i = 0; buffer[i] != '\0'; i++)
	putchar(buffer[i]);
}
