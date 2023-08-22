#include "main.h"

/**
 *print_character - Print format specifier %c
 *@args: arguments passed to function
 */


void print_character(va_list args)
{
	char c = (char)va_arg(args, int);

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
	int num = va_arg(args, int);
	int i;
	char buffer[32];
	int len = snprintf(buffer, sizeof(buffer), "%d", num);

	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
	}
}

/**
 * print_integeri - print unsigned integer from va_list
 * @args: va_list containing the unsigned integer to print
 */
void print_integeri(va_list args)
{
	int num = va_arg(args, int);
	int i;
	char buffer[32];
	int len = snprintf(buffer, sizeof(buffer), "%d", num);

	for (i = 0; i < len; i++)
	{
		putchar(buffer[i]);
	}
}



/**
 *print_string - prints a string from va_list
 *@args: va_list containing the string to print
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	size_t len, i;

	if (str == NULL)
	{
		const char null_str[] = "(null)";

		for (i = 0; null_str[i] != '\0'; i++)
			putchar(null_str[i]);
	} else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
			putchar(str[i]);
	}
}
