#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - creates a child process, makes the parent wait for,
 * it and executes a new process
 * Return: 0
 */
int main (void)
{
	char *argc[] = {"/bin/ls", "-l", NULL};
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error occured");
	}

	if (child_pid == 0)
	{
		/* the child process*/
		var = execve(argv[0], argv, NULL);

		if (var == -1)
		{
			perror("Unsuccesful");
		}
	}
	else
	{
		/*the parent process*/
		printf("its gonna be okay moonchild");
		wait(NULL);
	}
	return (0);
}

