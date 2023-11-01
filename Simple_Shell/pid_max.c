#include <stdio.h>
#include <unistd.h>
/**
 * main - gets the maximum value of a pid
 * Return: 0
 */
int main(void)
{
	pid_t pid_max;

	/* call the function responible for getting the pid */
	pid_max = getpid();
	printf("Maximum value of a pid is %u\n", pid_max);

	return (0);
}
