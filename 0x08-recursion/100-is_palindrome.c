/**
* _strlen - returns the length of a string
* @s: the string argument
* Return: the length of s
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
* check_palindrome - checks if a string is a palindrome
* @s: the string to check
* @i: the left index
* @j: the right index
* Return: 1 if s is a palindrome, 0 otherwise
*/
int check_palindrome(char *s, int i, int j)
{
/* If i and j cross, s is a palindrome */
if (i >= j)
return (1);
/* If s[i] and s[j] are different, s is not a palindrome */
if (s[i] != s[j])
return (0);
/* Check the next pair of characters */
return (check_palindrome(s, i + 1, j - 1));
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: the string to check
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
/* Get the length of s */
int len = _strlen(s);
/* Check if s is a palindrome from both ends */
return (check_palindrome(s, 0, len - 1));
}
