#include "main.h"
/**
 *_printf - printf function that prinst format specifiers
 *@format: format for different specifiers
 *Return: integer on success
 */
int _printf(const char *format, ...)
{
	int i, count = 0, index = 0, found = 0;
	const specifier_info *specifier = get_specifier_array();
	va_list args;
	if (format == NULL)
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
		{i++; /*skips % sign to the next character*/
			if (format[i] == '\0')
			break;

			else
				{
				for (index = 0; specifier[index].letter != 0; index++)
                {
                    if (format[i] == specifier[index].letter)
                    {
                        specifier[index].function(args);
                        count++;
                        found = 1;
                        break;
                    }
                }
			if (!found)
			{	putchar('%');
				putchar(format[i]);
				count += 2;
			}}}}
	va_end(args);
	return (count);
}
