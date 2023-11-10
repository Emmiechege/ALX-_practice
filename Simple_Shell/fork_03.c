#include <stdio.h>
#include <unistd.h>
/**
 * main - gets pid of parent process and created the child process
 * Return: 0
 */
int main(void)
{
	pid_t parent_pid;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Unsuccessful process");
		return (1);
	}
	if (child_pid == 0)
	{
		sleep(20);
		printf("I am the child process");
	}
	else
	{
		parent_pid = getpid();
		printf("I am the parent id");
	}

	return (0);
}
