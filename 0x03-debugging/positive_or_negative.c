#include "main.h"
#include <stdlib.h>

/**
 *  * main - assigns a random number to int n everytime
 *   * it executes, and prints it
 *    * Return: Always 0 (Success)
*/

int positive_or_negative(int n) 
{
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
