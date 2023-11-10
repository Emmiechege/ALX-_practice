#include <stdio.h>
#include <unistd.h>
/**
 * main - creates a new process similar to the parent process
 * Return: 0
 */
int main(void)
{
	/*a variable to hold the return value of the child process*/
	pid_t child_pid;

	if (child_pid == -1)
	{
	/* check if system call ws succesful*/
		perror("Error");
	}
	
	child_pid = fork();/*invoke fork to create the child process*/

	if (child_pid > 0)
	{
		printf("I am the parent process\n");
	}
	else (child == 0)
	{
		printf("i am the child process\n");
	}

	return (0);
}
