#include<stdio.h>
#include "main.h"
/**
 * jack_bauer - a function that prints every minute of a day.
 * @void: integer argument
 * Description:
 * Return: the last digit
 */
void jack_bauer(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar('0' + i / 10);
_putchar('0' + i % 10);
_putchar(':');
_putchar('0' + j / 10);
_putchar('0' + j % 10);
_putchar('\n');
}
}
}
