#include <stdio.h>
#include <string.h>
/**
 * main - tokenizes a string str
 * Return: 0
 */
int main(void)
{
	char str[] = "my name is Emmie"; /*the string to be split*/
	char *delim = " "; /*the delimiter*/
	char *token;

	token = strtok(str, delim); /*invoking the strtok function*/
	printf("%s\n", token);

	return (0);
}
