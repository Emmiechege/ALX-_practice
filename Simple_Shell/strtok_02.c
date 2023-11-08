#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "I,love,coding,so,much";/*the string to be tokenized*/
	char *delim = ",";/*the delimiter*/
	*token;

	/*for the fitst string srtok is called with the input string*/
	token = strtok(str, delim);

	while (token != NULL)
	{
		printf("Token is: %s\n", token);
		/*for subsequent strings,str is called with NULL*/
		token(NULL, delim);
	}

	return (0);
}
