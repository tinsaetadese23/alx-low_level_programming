#include <stdio.h>

/**
* main - prints the name of the program
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful
*/
int main(int argc, char **argv)
{
/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* print the first argument, which is the program name */
printf("%s\n", argv[0]);
}
return (0);
}
