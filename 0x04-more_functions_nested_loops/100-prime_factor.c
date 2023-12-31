#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long num, fac, i;

	num = 612852475143;
	fac = 1;

	for (i = 2; i <= num / i; i++)
	{
		while (num % i == 0)
		{
			fac = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		fac = num;
	}
	printf("%ld\n", fac);
	return (0);
}
