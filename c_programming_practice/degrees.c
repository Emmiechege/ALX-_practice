#include <stdio.h>

/**
 * main - the main function.
 *
 * Return: 0 success.
 */

int main(void)
{
	float celsius;
	float faren;

	printf("Enter the temperature in  degrees celsius : ");
	scanf("%f", &celsius);

	faren = (celsius + 9 / 5) + 32;
	printf("%.2f celsius = %.2f faren", celsius, faren);
	return (0);
}
