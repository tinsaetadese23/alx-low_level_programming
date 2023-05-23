#include<stdio.h>
#include "main.h"
/**
 * _isalpha - a function that checks if a given char is aphabetic
 * @c: integer argument
 * Description:
 * Return: 1 if lowercase else it return 0
 */
int _isalpha(int c)
{
int flag = 0;
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
flag = 1;
}
return (flag);
}

