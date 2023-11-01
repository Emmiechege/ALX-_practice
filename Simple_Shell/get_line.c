#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that prints "$ "
 * wait for the user to enter a command, prints it on the next line.
 */

int main(void)
{
	size_t buff_size = 0;
	char *buff = NULL;

	while (1) /* because its an infinite loop */
	{
		/* print the prompt */
		printf("$ ");
		/*ensure the prompt is displayed on stdout */
		fflush(stdout);

		/*Read users input using getline*/
		if (getline(&buff, &buff_size, stdin) == -1)
		{
			printf("Error reading input.\n");
			break;
		}
		/* print the input on the next line*/
		printf("Your input is: %s", buff);
	}
	/* free the allocated memory*/
	free(buff);

	return (0);
}
