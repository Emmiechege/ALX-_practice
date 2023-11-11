#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - runs commands with their full path without any arguments
 * Return: 0
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "a", NULL};
	pid_t my_pid;

	my_pid = fork();

	if (my_pid == -1)
	{
		perror("Unsuccesful");
	}
	if (my_pid == 0)
	{
		/*the child process*/
		int val = execve(argv[0], argv, NULL);

		if (val == -1)
		{
			perror("Error occured");
		}
	}
	else
	{
		/*parent process*/
		printf("All commands to this program will run\n");
		wait(NULL);
	}
	return (0);
}
