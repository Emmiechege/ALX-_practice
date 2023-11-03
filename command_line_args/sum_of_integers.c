#include <stdio.h>
#include <string.h>
/**
 * main - calculates sum of command line arguments
 * @argc: argument count
 * @argv: argument vector
 * Return - 0
 */
int main(int argc, char *argv[])
{
	int args_sum = 0;/* a variable to hold the sum of args*/
	int args = 1; /*the loop counter*/

	/*the nth element in the array should be less than argc*/
	while (args < argc)
	{
		args++;
	}
	/* converting the characters to integers*/
	args_sum = atoi(argv[args]);

	return (0);
}
