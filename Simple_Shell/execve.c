#include <stdio.h>
#include <unistd.h>
/**
 * main - used to replace current process with a new process
 * Return: 0
 */
int main(void)
{
	/* the first argument is file path, last argument is NULL pointer*/
	char *argv[] = {"/bin/ls", "-l", NULL};
	/*introduce a variable to hold the return value of execve*/
	/*use the array argv[0], to access the filename*/
	int val = execve(argv[0], argv, NULL);

	if (val == -1)/*Error handling*/
	{
		perror("Error");
	}
	printf("Done with execve");

	return(0);
}
