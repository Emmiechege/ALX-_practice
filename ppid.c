#include <stdio.h>
#include <unistd.h>

/**
 * main - gets the parent pid
 * Return: 0
 */
int main(void)
{
	pid_t parent_id; /* declare the parent id */

	/* call the function responsible for getting the parent id */
	parent_id = getppid();
	printf("my parent id is: %u\n", parent_id);
	return (0);
}

