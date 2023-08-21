#include "main.h"
/**
  *_printf - printf function that prinst format specifiers
  *@format: format for different specifiers
  *Return: integer on success
  */
int _printf(const char *format, ...)
{	int count = 0;
	va_list args;

		if (format == NULL)
			return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
	{
			format++;
		if (*format == '\0')
			break;

		if (*format == 'c')
			{
			print_character(args);
					count++;
			}
		else if (*format == 's')
			{
			print_string(args);
			count++;
			}
		else if (*format == '%')
			{
			putchar(*format);
			count++;
			}}
		format++;
	}
	va_end(args);
	return (count);
}
