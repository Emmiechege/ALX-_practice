#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * main - used to obtain information about the file name
 * Return: 0
 */
int main(void)
{
	const char *file_name = "median.c";
	struct stat buff;

	/* check return value of stat*/
	if (stat(file_name, &buff) == 0)
	{
		/*filesize to be printed as a long integer*/
		printf("File Size: %lld bytes\n", (long long)buff.st_size);
	}
	else
	{
		perror("stat");
	}

	return (0);
}
