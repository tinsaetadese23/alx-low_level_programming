#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it with a char
* @size: the size of the array
* @c: the char to initialize the array with
* Return: a pointer to the array, or NULL if it fails or size is 0
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
return (NULL);
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
