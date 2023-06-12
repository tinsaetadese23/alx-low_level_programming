#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string
* @s: the string to measure
*
* Return: the length of the string as an integer
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') /* base case: if the string is empty, return 0 */
return (0);
return (1 + _strlen_recursion(s + 1));
}
