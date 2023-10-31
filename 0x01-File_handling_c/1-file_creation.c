#include <stdio.h>
#include <stdlib.h>
/**
 * main - creating and writing into a file
 * use of fprints to write into a file
 */
void main(void)
{
	char emmie[20]; /*declaring a  string of characters should have an array */

	FILE *fp = NULL; /* declare and initialize file pointer*/

	fp = fopen("ab.txt", "w"); /* open the file */

	if (fp == NULL) /* confirm if fp is a null pointer */
	{
		printf("Error");
			exit(1);
	}
	/* use fprintf to write data on the file */
	fprintf(fp, "The string to be printed: %s", emmie);

	fclose(fp); /* close the file */
}

