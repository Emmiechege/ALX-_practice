#include<stdio.h>
#include<unistd.h>
/**
 * main - creates a process identical to the first one
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	printf("Before fork was invoked\n");

	fork();

	if (my_pid == -1)
	{
		perror("Unsuccesful\n");
		return (1);
	}

	printf("After fork was invoked\n");

	return (0);
}
