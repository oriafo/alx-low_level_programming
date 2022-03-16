#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;
	unsigned long int sum1, sum2, sum;

	sum1 = 0;
	sum2 = 0;
	sum = 0;
	while (i <= 1024)
		{	
			if ((i % 3) == 0)
			{
				sum1 = sum1 + i;
				i++;
			}
			else if ((i % 5) == 0)
			{
				sum2 = sum2 + i;
				i++;
			}
		}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}
