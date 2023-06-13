#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
* Return: a pointer to the new string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
i = 0;
while (i < len1)
{
concat[i] = s1[i];
i++;
}
j = 0;
while (j < len2)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';
return (concat);
}
