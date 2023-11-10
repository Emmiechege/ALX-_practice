#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - replaces the current process with a new process
 * Return: o
 */
int main(void)
{
	/*first arg is file path, last arg is NULL pointer*/
	char argv[] = {"usr/bin/bash/ls", "-l", NULL};

	/*variable to hold return value of execve*/
	/*use array argv[0] to access filename*/
	int var = execve(argv[0], argv, NULL);

	if (var == -1)/*if system call fails*/
	{
		perror("Error occured");
	}

	printf("Done with execve");

	return (0);
}

