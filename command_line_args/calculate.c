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
