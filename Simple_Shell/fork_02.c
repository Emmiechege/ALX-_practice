#include<stdio.h>
#include<unistd.h>
/**
 * main - creates a process identical to the first one
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	printf("Before fork was invoked");

	my_pid = fork();

	if (my_pid == -1)
	{
		perror("Unsuccesful");
		return (1);
	}

	printf("After fork was invoked");

	return (0);
}



