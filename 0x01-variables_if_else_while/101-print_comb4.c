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
int e = 0;
for (c = 48; c <= 55; c++)
{
for (d = c + 1; d <= 56; d++)
{
for (e = d + 1; e <= 57; e++)
{
putchar(c);
putchar(d);
putchar(e);
if (c != 55)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
