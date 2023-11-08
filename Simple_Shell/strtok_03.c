#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - parses and tokenizes a string, allocates memory and prints the tokens
 * Return: 0
 */
int main(void)
{
	char *src = "coding makes me so happy";
	/*str holds a copy of the string, allocate memory for it*/
	/*the length of memoty ro be allocate is determined by the length of src*/
	char *str = malloc(sizeof(char) * strlen(src));
	char *delim = " ";/*the delimiter*/
	char *token;/*holds the tokens*/

	strcpy(str, src);/*copy contents of src into str*/

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}

