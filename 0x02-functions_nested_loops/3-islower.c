#include<stdio.h>
#include "main.h"
/**
 *_islower - a function that checks if a given char is lowercase
 *@c: integer argument
 *Description: a function that checks if a given char is lowercase
 *Return: 1 if lowercase else it return 0
 */
int _islower(int c)
{
int flag = 0;
if (c >= 97 && c <= 122)
{
flag = 1;
}
return (flag);
}

