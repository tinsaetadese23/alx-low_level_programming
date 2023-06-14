#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make change
* @argc: the number of arguments
* @argv: the array of arguments
* Return: 0 if successful, 1 if error
*/
int main(int argc, char **argv)
{
int cents, coins, quarters, dimes, nickels, pennies;

/* check for valid argc and argv */
if (argc > 0 && argv != NULL)
{
/* check if the program receives one argument */
if (argc == 2)
{
/* convert the argument to an integer */
cents = atoi(argv[1]);

/* check if the argument is negative */
if (cents < 0)
{
/* print 0 and return 0 to indicate success */
printf("0\n");
return (0);
}

/* initialize coins to 0 */
coins = 0;

/* calculate the number of quarters needed */
quarters = cents / 25;
coins += quarters;
cents %= 25;

/* calculate the number of dimes needed */
dimes = cents / 10;
coins += dimes;
cents %= 10;

/* calculate the number of nickels needed */
nickels = cents / 5;
coins += nickels;
cents %= 5;

/* calculate the number of pennies needed */
pennies = cents;
coins += pennies;

/* print the minimum number of coins and return 0 to indicate success */
printf("%d\n", coins);
return (0);
}
else
{
/* print error message and return 1 to indicate error */
printf("Error\n");
return (1);
}
}
return (0);
}
