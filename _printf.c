#include "main.h"
/**
 *_printf - printf function that prinst format specifiers
 *@format: format for different specifiers
 *Return: integer on success
 */
int _printf(const char *format, ...)
{	int count = 0, index = 0;
	/*Betty error - more than 40 lines of code.Created file with funct*/
	const specifier_info *specifier = get_specifier_array();
	va_list args;

	if (format == NULL) /* Added a check- if format string is NULL return error*/
	return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else /* if format is a % sign*/
		{
			format++; /*skips % sign to the next character*/
			if (*format == '\0')
				break;

			while (specifier[index].letter != 0)
			{
				if (*format == specifier[index].letter)
				{
					specifier[index].function(args);
					count++;
					break;
				}	index++;
			}
			if (specifier[index].letter == 0)
			{	putchar('%');
				putchar(*format);
				count += 2;
			}}
		format++;
	}
	va_end(args);
	return (count);
}
