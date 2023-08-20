#include "main.h"

/**
  *print_charcaters - Print format specifier %c
  *
  *
  */

void print_character(va_list args)
{
	char c = va_arg(args, int);
			putchar(c);
			}

/**
  *print_percent - print %
  *@va_list: variadic funct
  *
  */

void print_percent(va_list args)
{
	putchar('%');
	(void)args;
}


/**
  *print_integer - print integer where seen
  *@va_list: variadic funct
  *
  */

void print_integer(va_list args)
{
	int d = va_arg(args, int);

	 char buffer[20];
    int index = 0;
    
    if (d == 0)
    {
        putchar('0');
        return;
    }
    
    if (d < 0)
    {
        putchar('-');
        d = -d;
    }
    
    while (d > 0)
    {
        buffer[index++] = '0' + (d % 10);
        d /= 10;
    }
    
    while (index > 0)
    {
        putchar(buffer[--index]);
    }
}


/**
  *print_string - prints a string from va_list
  *@args: va_list containing the string to print
  *
  */

void print_string(va_list args)
{
	char *s;
	s = va_arg(args, char *);
	
	while (*s !='\0')
	{
		putchar(*s);
		s++;
}
}
