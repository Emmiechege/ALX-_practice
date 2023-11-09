#include <stdio.h>
#include <unistd.h>
/**
 * main - creates a new process almost identical to the first one
 * Return: 0
 */
int main(void)
{
	/* create a variable that stores the results of the fork system call*/
	pid_t child_pid;

	/*invoke fork system call*/
	child_pid = fork();/*child process is created here*/

	if (child_pid == -1) /* means the system call failed*/
	{
		perror("Error");
	}
	if (child_pid == 0)
	{
	/* child_pid has process ID of newly created child  process*/
	/*if child_pid is 0,it means we are inside the child process*/
	/* this code is executed by the child process */
		printf("I am the child process\n");
	}
	else
	{
	/*this code is executed by the parent process*/
	/*if child_pid is greater than 0, it means we are in the parent process*/
		printf("I am the parent process\n");
	}

	return (0);
}

