#include<stdio.h>
#include "main.h"
/**
 * _abs - a function that prints absolute value of an integer
 * @n: integer argument
 * Description:
 * Return: 1 if no is > 0 and 0 if n = 0 and -1 if no < 0
 */
int _abs(int n)
{
int flag = 0;
if (n > 0)
{
flag = n;
}
else if (n < 0)
{
flag = -1 * n;
}
return (flag);
}
