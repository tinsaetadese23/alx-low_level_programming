#include <stdlib.h>

/**
* count_words - counts the number of words in a string
* @str: the string to be counted
* Return: the number of words in the string
*/
int count_words(char *str)
{
int i, count, in_word;

count = 0;
in_word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
}
return (count);
}

/**
* copy_word - copies a word from a string to a new string
* @str: the source string
* @start: the starting index of the word
* @end: the ending index of the word
* Return: a pointer to the new string, or NULL if it fails
*/
char *copy_word(char *str, int start, int end)
{
char *word;
int i, j;

/* allocate memory for the new string */
word = malloc(sizeof(char) * (end - start + 2));
if (word == NULL)
return (NULL);

/* copy the word from the source string */
j = 0;
for (i = start; i <= end; i++)
{
word[j] = str[i];
j++;
}
word[j] = '\0';

/* return the pointer to the new string */
return (word);
}

/**
* strtow - splits a string into words
* @str: the string to be split
* Return: a pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
char **words;
int i, j, k, n;

/* check for valid str */
if (str == NULL || str[0] == '\0')
return (NULL);

/* count the number of words in str */
n = count_words(str);
if (n == 0)
return (NULL);

/* allocate memory for the array of words */
words = malloc(sizeof(char *) * (n + 1));
if (words == NULL)
return (NULL);

/* split the str into words and copy them to the array */
k = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
/* find the end of the word */
j = i;
while (str[j] != ' ' && str[j] != '\0')
j++;

/* copy the word to the array */
words[k] = copy_word(str, i, j - 1);
if (words[k] == NULL)
{
/* free the allocated memory if copy fails */
for (j = 0; j < k; j++)
free(words[j]);
free(words);
return (NULL);
}
k++;

/* skip to the next word */
i = j;
}
}

/* add a NULL terminator to the array */
words[k] = NULL;

/* return the pointer to the array */
return (words);
}
