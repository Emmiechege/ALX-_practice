#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - executes programs and creates a child process
 * Return: 0
 */
int main(void)
{
	pid_t child_pid;

	char *argv[] = {"/bin/ls", "-l", NULL};

	/*invoke the fork system call to create child process*/
		child_pid = fork();

		/*check if fork system call fails*/
		if (child_pid == -1)
		{
			perror("Error");
		}
		if (child_pid == 0)
		{
		/*the child process*/
		/*variable to hold return value of exec*/
			int val = execve(argv[0], argv, NULL);

			if (val == -1)/*check if exec system call fails*/
			{
				perror("Error");
			}
		}
		else
		{
			/*parent process*/
			/* wait is invoked in the parent process*/
			wait(NULL);
			printf("Just executed\n");
		}
		return (0);
}
