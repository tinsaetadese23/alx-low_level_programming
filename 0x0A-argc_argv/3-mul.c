#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful, 1 if error
*/
int main(int argc, char **argv)
{
int a, b, result;

/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* check if the program receives two arguments */
if (argc == 3)
{
/* convert the arguments to integers */
a = atoi(argv[1]);
b = atoi(argv[2]);

/* multiply the arguments and print the result */
result = a * b;
printf("%d\n", result);

/* return 0 to indicate success */
return (0);
}
else
{
/* print error message and return 1 to indicate error */
printf("Error\n");
return (1);
}
}
return (0);
}
