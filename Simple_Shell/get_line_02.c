#include <stdio.h>
#include <stdlib.h>
/**
 * main - gets name given on stream and prints it out
 * Return: no of characters read
 */
int main(void)
{
	size_t buff_size = 20;
	char *buff = malloc(sizeof(char) *n);

	printf("Enter name: ");
	getline(&buff, &buff_size, stdin);

	printf("The name is:  %sThe size is %lu", buff, buff_size);

	free(buff);

	return(0);
}
