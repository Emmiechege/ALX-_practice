#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - parses and tokenizes a string, allocates memory and prints the tokens
 * Return: 0
 */
int main(void)
{
	char *orig_str = "coding makes me so happy";
	/*str holds a copy of the string, allocate memory for it*/
	/*the size of memory to allocate is determined by the length of orig_str*/
	/*by allocating a separate block of memory,*/
	/*we ensure original string is not modified by strtok*/
	char *str = malloc(sizeof(char) * strlen(orig_str));
	char *delim = " ";/*the delimiter*/
	char *token;/*holds the tokens*/

	strcpy(str, orig_str);/*copy contents of orig_str into str*/

	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
