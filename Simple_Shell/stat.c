#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * main - used to obtain information about the file name
 * Return: 0
 */
int main(void)
{
	const char *file_name;
	struct stat buff;

	if (stat(file_name, &buff) == 0)
	{
		printf("File Size: %lld bytes\n", (long long)buff.st_size);
	}
	else
	{
		perror("stat");
		return (-1);
	}

	return (0);
}
