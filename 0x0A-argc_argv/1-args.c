#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful
*/
int main(int argc, char **argv)
{
/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* print the number of arguments, excluding the program name */
printf("%d\n", argc - 1);
}
return (0);
}
