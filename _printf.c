#include "main.h"
/**
 *_printf - printf function that prinst format specifiers
 *@format: format for different specifiers
 *Return: integer on success
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	int index = 0;
	struct specifier_info {
		char letter;
		void (*function)(va_list);
	};
	struct specifier_info specifier[] = {
		{'d', print_integer},
		{'c', print_character},
		{'%', print_percent},
		{'s', print_string},
		{'i', print_unsigned_integer},
		{0, NULL}
	};
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			while (specifier[index].letter != 0)
			{
				if (format[i] == specifier[index].letter)
				{
					specifier[index].function(args);
					count++;
					break;
				}
				index++;
			}
			if (specifier[index].letter == 0)
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
	}
	va_end(args);
	return (count);
}
