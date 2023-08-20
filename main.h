#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *);
void print_integer(va_list);
void print_unsigned_integer(va_list args);
void print_character(va_list);
void print_string(va_list);
void print_percent(va_list);

/**
  *struct characters - structure to print characters
  *
  *
  *
  *
  */

typedef struct {
	char letter;
	void (*function)(va_list);
} ch;

#endif
