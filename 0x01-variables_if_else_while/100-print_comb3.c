#include<time.h>
#include<stdio.h>
/**
 *main - Entry point
 *@void: no argument
 *Return: Always 0(success)
 */
int main(void)
{
int c = 0;
int d = 0;
for (c = 48; c <= 56; c++)
{
for (d = c + 1; d <= 57; d++)
{
putchar(c);
putchar(d);
if (c != 56)
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
