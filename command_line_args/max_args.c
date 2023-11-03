#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds the maximum value among a given list of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* we initialize the max value as the least possible value */
	int max_value = INT_MIN;

	/* a loop counter to loop through the arguments */
	for (int i = 1; i < argc; i++)
	{
	/* the arguments are strings, we convert them to integers*/
		num = atoi(argv[i]);
	/* we parse  for the no with largest value*/
		num < max_value;

		if(num > max_value)
		{
		       num = max_value;
		}
	}
	return (0);
}
