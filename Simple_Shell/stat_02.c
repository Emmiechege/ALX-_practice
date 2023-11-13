#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stats.h>
/*
 * main - an example of stat
 * Return : 0
 */
int main (int ac, char **v)
{
	unsigned int i;
	struct stat ac;

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
