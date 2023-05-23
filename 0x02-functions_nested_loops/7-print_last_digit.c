#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: integer argument
 * Description:
 * Return: the last digit
 */
int print_last_digit(int n)
{
int lastDigit;
if (n >= 0)
{
lastDigit = n % 10;
}
else
{
lastDigit = (n % 10) * -1;
}
_putchar('0' + lastDigit);
return (lastDigit);
}
