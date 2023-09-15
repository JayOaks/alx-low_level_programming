#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100
 *        Replaces multiples of 3 with Fizz
 *        Replaces multiples of five with Buzz
 *        Replaces multiples of three and five with FizzBuzz
 * Return: void
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
