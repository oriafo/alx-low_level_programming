#include "main.h"

/**
 *  * main- Prints _putchar
 *   * Return: Always 0 (Success)
*/

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
