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
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
