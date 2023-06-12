#include <stdio.h>

/**
* _helper_function - helper function to find the square root of a number
* @n: the number to find the square root of
* @i: the possible square root
*
* Return: the square root of n as an integer, or -1 if n has no natural sqrt fn
*/
int _helper_function(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_helper_function(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the square root of n as an integer, or -1 if n has no natural sqrt fn
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_helper_function(n, 0));
}
