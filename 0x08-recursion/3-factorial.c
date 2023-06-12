#include <stdio.h>

/**
* factorial - returns the factorial of a given number
* @num: the number to calculate the factorial of
*
* Return: the factorial of n as an integer, or -1 if n is negative
*/
int factorial(int num)
{
if (num < 0)
return (-1);
if (num == 0)
return (1);
return (num * factorial(num - 1));
}
