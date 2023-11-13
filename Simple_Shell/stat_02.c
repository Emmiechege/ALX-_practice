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
		return (1);/*return error code*/
	}
	i = 1;/*start with first command line argument*/
	while (av[i])
	{
		printf("%s:", av[i]);/*print current file path*/
		/*invoke stat function to check if file exists*/
		if (stat(av[i], &st) == 0)
		{
			printf(" FOUND\n");/*print if the file is found*/
		}
		else
		{
			printf(" NOT FOUND\n");/*print if file isnt found*/
		}
		i++;
	}
	return (0);
}
