#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * struct fmt - Struct to define format specifier and associated function
 *
 * @fmt: The format specifier character.
 * @fn: The function associated with the format specifier.
 */
struct fmt
{
	char fmt;          /* The format specifier character*/
	int (*fn)(va_list, char[], int, int, int, int); /* The associated function*/
};

typedef struct fmt fmt_t;

int _printf(const char *format, ...);


/****************** UTILS ******************/
int is_printable(char);
int is_digit(char);

/****************** FUNCTIONS ******************/
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);

#endif
