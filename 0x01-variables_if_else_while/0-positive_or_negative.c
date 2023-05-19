#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - entry point
 * @void: no arguments
 * Description: the program starts and ends here.
 * Return: value 0 to exit
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
