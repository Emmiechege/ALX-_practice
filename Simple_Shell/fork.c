#include <stdio.h>
#include <unistd.h>
/**
 * main - creates a child process similar to the parent process
 * Return: 0
 */
int main(void)
{
	/*a variable to hold the return value of the fork system call*/
	pid_t child_pid;

	child_pid = fork();/*invoke fork to create the child process*/

	if (child_pid == -1)
	{
	/* check if system call failed*/
		perror("Error");
	}

	if (child_pid > 0)
	{
	/*this code is executed by the parent process*/
	/*if child PID is greater than 0,it means we are in the prent process*/
		printf("I am the parent process\n");
	}
	else
	{
	/*if child PID is 0, means we are in the child process*/
	/*This code is executed by the child process*/
		printf("I am the child process\n");
	}

	return (0);
}
