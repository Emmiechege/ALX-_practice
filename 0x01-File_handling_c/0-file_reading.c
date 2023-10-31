#include <stdio.h>
#include <stdlib.h>
/**
 * main - reads into an already existing file
 * using  the fgetc() function to read into a file
 */
void main(void)
{
	char ch; /* wil be used to loop through the characters */

	FILE *fp = NULL; /*declare FILE pointer*/

	fp = fopen("abc.txt", "r"); /*open file*/

	if (fp == NULL) /* error handling */
	{
		printf("Error");
			exit(1);
	}
	do {
		/* read single characters from the file */
		ch = fgetc(fp);

		/*print characters read*/
		putchar(ch);
	} while (ch != EOF); /*create a loop if character is not at end of file*/

	fclose(fp); /*close file*/
}




