#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
/**
 * print_buffer - Prints the contents of the buffer if it is not empty
 * @buffer: Array of characters.
 * @buff_ind: Index at which to add the next character, representing the length
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

/**
 * _printf - Custom printf function
 * @format: The format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	int buff_ind = 0;
	va_list args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			if (format[i + 1] == '%') /* Case: '%%' prints a single '%'*/
			{
				buffer[buff_ind++] = '%';
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					printed_chars += buff_ind;
				}
				i++; /* Skip the next character since it's '%'*/
			}
			else if (format[i + 1] == 'c') /* Case: '%c' prints a character*/
			{
				int ch = va_arg(args, int);

				buffer[buff_ind++] = ch;
				if (buff_ind == BUFF_SIZE)
				{
					print_buffer(buffer, &buff_ind);
					printed_chars += buff_ind;
				}
				i++; /* Skip the next character since it's 'c'*/
			}
			else if (format[i + 1] == 's') /* Case: '%s' prints a string*/
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					buffer[buff_ind++] = *str;
					str++;
					if (buff_ind == BUFF_SIZE)
					{
						print_buffer(buffer, &buff_ind);
						printed_chars += buff_ind;
					}
				}
				i++; /*Skip the next character since it's 's'*/
			}
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(args);

	return (printed_chars);
}
