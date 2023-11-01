#include <stdio.h>
#include <unistd.h>

/*
 * main - gets the PID
 *
 * Return: 0
 */
int main(void)
{
	pid_t the_pid; /*declaring pid*/

	 /*calling the function responsible for getting the pid */
	the_pid = getpid();
	printf("%u\n", the_pid);

	return (0);
}
