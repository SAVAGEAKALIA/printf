#include "main.h"

/**
  *
  *
  *
  *
  */

int _printf(const char *format, ...)
{
	va_list args;
	va_start (args, *format);
	char *count;
	int i;

	ch specifier[] = {
		{'d', print_integer},
		{'c', print_character},
		{'s', print_string},
		{0, NULL}
	}

	for (count = format; *count != '\0'; count++)
    {
        if (*count != '%')
            putchar(*count);
        else
        {
            count++;
            
            i = 0;
            while (specifiers[i].letter != 0)
            {
                if (*count == specifiers[i].letter)
                {
                    specifiers[i].function(args);
                    break;
                }
                i++;
            }

            if (specifiers[i].letter == 0)
                putchar('%');
        }
    }

    va_end(args);
}
