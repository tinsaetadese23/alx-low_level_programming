/**
* check_divisor - checks if a number has a divisor other than 1 and itself
* @n: the number to check
* @i: the potential divisor
* Return: 0 if n has a divisor, 1 otherwise
*/
int check_divisor(int n, int i)
{
/* If i is greater than sqrt(n), n has no divisor */
if (i * i > n)
return (1);
/* If n is divisible by i, n has a divisor */
if (n % i == 0)
return (0);
/* Check the next potential divisor */
return (check_divisor(n, i + 1));
}

/**
* is_prime_number - checks if a number is prime
* @n: the number to check
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
/* If n is less than or equal to 1, it is not prime */
if (n <= 1)
return (0);
/* If n is 2 or 3, it is prime */
if (n == 2 || n == 3)
return (1);
/* If n is divisible by 2 or 3, it is not prime */
if (n % 2 == 0 || n % 3 == 0)
return (0);
/* Check for divisors from 5 to sqrt(n), incrementing by 6 */
return (check_divisor(n, 5));
}
