#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: the number of arguments
* @av: the array of arguments
* Return: a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len;

/* check for valid ac and av */
if (ac == 0 || av == NULL)
return (NULL);

/* calculate the total length of the new string */
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; /* for the \n character */
}
len++; /* for the \0 character */

/* allocate memory for the new string */
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

/* copy each argument to the new string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';

/* return the pointer to the new string */
return (str);
}
