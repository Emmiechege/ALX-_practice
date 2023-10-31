#include <stdio.h>
#include <stdlib.h>
/**
 * main - creates and writes into a file
 * use of fputs() to write into a file
 */
void main(void)
{
	FILE *fp = NULL; /* declaring and initializing the pointer */

	if (fp == NULL) /* error handling*/
		printf("Error");
			exit(1);

	fp = fopen("abc.txt", "w"); /* opening the file*/

	fputs("i love coding", fp); /*writing inside the file */

	fclose(fp); /* closing the file */
}
