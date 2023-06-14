#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - checks if a string is a valid number
* @str: the string to be checked
* Return: 1 if the string is a number, 0 otherwise
*/
int is_number(char *str)
{
int i;

/* loop through the string and check each character */
for (i = 0; str[i] != '\0'; i++)
{
/* if the character is not a digit, return 0 */
if (!isdigit(str[i]))
return (0);
}
/* if all characters are digits, return 1 */
return (1);
}

/**
* main - adds positive numbers
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful, 1 if error
*/
int main(int argc, char **argv)
{
int i, sum;

/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* initialize sum to 0 */
sum = 0;

/* loop through the arguments and add them */
for (i = 1; i < argc; i++)
{
/* check if the argument is a valid number */
if (is_number(argv[i]))
{
/* convert the argument to an integer and add it to sum */
sum += atoi(argv[i]);
}
else
{
/* print error message and return 1 to indicate error */
printf("Error\n");
return (1);
}
}

/* print the sum and return 0 to indicate success */
printf("%d\n", sum);
return (0);
}
return (0);
}
