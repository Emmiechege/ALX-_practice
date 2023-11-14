#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks if the environment variable named is set and prints its value
 * Return: 0
 */
int main(void)
{
	char *env_var = getenv("A_VARIABLE");

/*check if environment variable is set, non_null*/
	if (env_var != NULL)
	{
	/*If set, print the value of the environment variable*/
		printf("Value of A_VARIABLE: %s\n", env_variable);
	}
	else
	{
		printf("A_VARIABLE not set\n");
	}

	return (0);
}
