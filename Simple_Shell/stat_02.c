#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stats.h>
/*
 * main - demonstrates use of stat function to check existence of files,
 * specified as commmand line arguments
 * @ac: argument count
 * @av: aray of strings representing command line arguments
 * Return : 0 if succesful, 1 if there is an error
 */
int main (int ac, char **v)
{
	unsigned int i;/*loop counter for command line arguments*/
	struct stat ac;/*struct to hold information about a file*/
/*confirm if there's atleast one command line arg, program name*/
	if (ac < 2)
	{
		printf ("Usage: %s path_to_file ...\n", av[0]);
		return (1);
	}
	i = 1;
	while (av[i])
	{
		printf("%s:", av[i]);
		if (stat(av[i], &st) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
	return (0);
}
