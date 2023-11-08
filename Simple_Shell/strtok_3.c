#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - tokenizes a string,allocates memory to it and prints the tokens
 * Return: 0
 */
int main(void)
{
	char *str_orig = "Do hard things";
	char *str = malloc(sizeof(char) * strlen(str_orig));
	char *delim = " ";
	char *token;

	strcpy(str, str_orig);
	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("Token: %s\n", token);
		token = strtok(NULL, delim);
	}
	free(str);

	return (0);
}
