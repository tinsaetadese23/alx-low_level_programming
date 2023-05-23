#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - function name
 * @void: no arguments
 * Description: a function prints alphabet in a lowercase.
 * Return: value 0 to exit
 */
void print_alphabet(void)
{
char c = 'a';
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

