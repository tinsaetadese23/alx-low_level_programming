#include <stdio.h>

/**
* print_name - A function that prints a name
* @name: The name to print
* @f: function pointer
*
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
printf("%s\n", name);
}
