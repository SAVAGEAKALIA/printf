#include "main.h"
/**
  *
  *
  *
  */

void print_character(va_list)
{
	char c = char(va_arg(args, int));
	putchar(c);
}
