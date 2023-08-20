#include "main.h"

/**
  *print_string - prints a string from va_list
  *@args: va_list containing the string to print
  *
  */

void print_string(va_list args)
{
	char *s;
	s = va_arg(args, char *);
	puts(s);
}
