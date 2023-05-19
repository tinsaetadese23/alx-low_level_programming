#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - Entry point
 *@void: no argument
 *Return: Always 0(success)
 */
int main(void)
{
char c = 0;
for (c = 48; c <= 57; c++)
{
	putchar(c);
}
for (c = 97; c <= 102; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
