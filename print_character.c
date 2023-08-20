#include "main.h"
/**
  *
  *
  *
  */

void print_character(va_list args)
{
	char c = (char)va_arg(args, int);
	putchar(c);
}
