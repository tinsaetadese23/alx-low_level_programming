#include<stdio.h>
#include "main.h"
/**
 * print_sign - a function that prints sign of a number
 * @n: integer argument
 * Description:
 * Return: 1 if no is > 0 and 0 if n = 0 and -1 if no < 0
 */
int print_sign(int n)
{
int flag = 0;
if (n > 1)
{
_putchar('+');
flag = 1;
}
else if (n < 0)
{
_putchar('-');
flag = -1;
}
else
_putchar('0');
return (flag);
}
