#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function name
 * @void: no arguments
 * Description: a function prints alphabet in a lowercase 10times
 * Return: value 0 to exit
 */
void print_alphabet_x10(void)
{
char c = 'a';
int counter = 0;
for (counter = 0; counter < 10; counter++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
