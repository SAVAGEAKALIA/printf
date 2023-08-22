#ifndef MAIN_H
#define MAIN_H
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 *struct specifier_info - structure to print format string to specifiers
 *@letter: represent format specifier
 *@function: function called according to format specifier
 *Define the struct to map format specifiers to print functions
 */

typedef struct specifier_info
{
	char letter;
	void (*function)(va_list args);
} specifier_info;

/* Function prototypes*/
int _printf(const char *format, ...);
void print_integer(va_list args);
void print_character(va_list args);
void print_string(va_list args);
void print_percent(va_list args);
void print_integeri(va_list args);
void print_unsigned_integer(va_list args);
void print_octal(va_list args);
void print_hex_lower(va_list args);
void print_hex_upper(va_list args);
void print_pointer(va_list args);
const specifier_info *get_specifier_array(void);
#endif
