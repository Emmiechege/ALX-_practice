#include <stdio.h>
/**
 * main - prints all the  arguments without using argc
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int args = 1;

	/*iterate through the array until you encounter a null pointer*/
	while (argv[args] != NULL)
	{
		/* print and display value of the argument and the string*/
		printf("Argv is %d: %s\n", args, argv[args]);
		args++;
	}

	return (0);
}
