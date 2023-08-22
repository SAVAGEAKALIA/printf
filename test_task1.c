#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
int len = 0;
int len2 = 0;
len = _printf("Number: %d, %i\n", 4034, 4034);
len2 = printf("Number: %d, %i\n", 4034, 4034);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("Negative: %i, %d\n", -4034, -4034);
len2 = printf("Negative: %i, %d\n", -4034, -4034);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("long: %li, %li\n", 4545439394949595, 4545439394949595);
len2 = printf("long: %li, %li\n", 4545439394949595, 4545439394949595);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("long: %li, %li\n", -4545439394949595, -4545439394949595);
len2 = printf("long: %li, %li\n", -4545439394949595, -4545439394949595);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("NULL: %p\n", NULL);
len2 = printf("NULL: %p\n", NULL);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("%d\n", INT_MAX);
len2 = printf("%d\n", INT_MAX);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
len = _printf("%d\n", INT_MIN);
len2 = printf("%d\n", INT_MIN);
printf("Len:[%d]\n", len);
printf("Len1:[%d]\n\n", len2);
return (0);
}
