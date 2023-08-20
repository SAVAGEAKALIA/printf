#include "main.h"

/**
  *
  *
  *
  *
  */

int _printf(const char *format, ...)
{

	int i, count = 0;
	int index = 0;
	ch specifier[] = {
		{'d', print_integer},
		{'c', print_character},
		{'s', print_string},
		{0, NULL}
	};

	va_list args;
	va_start (args, *format);

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
            
			if (format[i] == '%')
			{
				putchar('%');
				count++;
			}

			else
			{
            while (specifier[index].letter != 0)
            {
                if (format[i] == specifier[index].letter)
                {
                    specifier[index].function(args);
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
    }

    va_end(args);

	return (count);
}
