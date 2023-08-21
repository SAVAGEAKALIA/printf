#include "main.h"
/**
 *_printf - printf function that prinst format specifiers
 *@format: format for different specifiers
 *Return: integer on success
 */
int _printf(const char *format, ...)
{	int i, count = 0, index = 0;
	/*
	 *Betty error - more than 40 lines of code.Created file named
	 * specifier.c with function
	 */
	const specifier_info *specifier = get_specifier_array();
	va_list args;

	if (format == NULL) /* Added a check- if format string is NULL return error*/
	return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else /* if format is a % sign*/
		{
			i++; /*skips % sign to the next character*/
			
			if (format[i] == '\0')/*checks if format[i] is null*/
				break;

			while (specifier[index].letter != '\0')
			{
				if (format[i] == specifier[index].letter)
				{
					specifier[index].function(args);
					count++;
					break;
				}	index++;
			}
			}}
	va_end(args);
	return (count);
}
