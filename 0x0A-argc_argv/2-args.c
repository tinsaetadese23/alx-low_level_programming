#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful
*/
int main(int argc, char **argv)
{
int i;

/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* loop through the arguments and print them */
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
}
return (0);
}
