#include <stdio.h>
/**
 * main - prints all the  arguments without using argc
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int args = 1;

	while (argv[args] != NULL)
	{
		printf("Argv is %d: %s\n", args, argv[args]);
		args++;
	}

	return (0);
}
