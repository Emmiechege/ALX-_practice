#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - waits for the child to change state before terminating
 * Return: 0
 */
int main(void)
{
	pid_t child_pid;
	pid_t parent_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error occured");
		return (1);
	}

	if (child_pid == 0)
	{
		/*the child process*/
		printf("I am the child");
	}
	else
	{
		/*the parent process*/
		sleep(20);
		printf("I am the parent");
	}
	return (0);
}
