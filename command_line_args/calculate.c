#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error: provide two integers as command line arguments\n");
		return 1;
	}

	/* convert the command line arguments to integers */
	int num1, num2;
	if (scanf(argv[1], "%d", &num1) != 1 || sscanf(argv[2], "%d", &num2) != 1)
	{
		printf("Error: invalid input,provide two integer values\n");
		return 1; /*return a non-zero satus code indicating error*/
	}
