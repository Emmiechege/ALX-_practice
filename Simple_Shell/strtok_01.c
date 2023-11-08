#include <stdio.h>
#include <string.h>
/**
 * main - tokenizes a string str
 * return: 0
 */
int main(void)
{
	char *str = "my name is Emmie";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	printf = ("Token is: %s", token);

	return (0);
}
