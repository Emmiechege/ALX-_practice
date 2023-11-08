#include <stdio.h>
#include <string.h>
/**
 * main - tokenizes a string and prints all the tokens
 * Return: 0
 */
int main(void)
{
	char str[] = "I,love,coding,so,much";/*the string to be tokenized*/
	char *delim = ",";/*the delimiter*/
	char *token;

	/*for the fitst string srtok is called with the input string*/
	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("Token is: %s\n", token);
		/*for subsequent strings,str is called with NULL*/
		token = strtok(NULL, delim);
	}

	return (0);
}
