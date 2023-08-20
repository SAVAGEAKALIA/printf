#include "main.h"

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
