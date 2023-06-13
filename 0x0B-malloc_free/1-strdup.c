#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: the string to duplicate
* Return: a pointer to the duplicated string, or NULL if str is NULL or
* insufficient memory was available
*/
char *_strdup(char *str)
{
char *duply;
int len, i;
if (str == NULL)
return (NULL);
len = 0;
while (str[len] != '\0')
len++;
duply = malloc(sizeof(char) * (len + 1));
if (duply == NULL)
return (NULL);
for (i = 0; i < len; i++)
duply[i] = str[i];
duply[i] = '\0';
return (duply);
}
