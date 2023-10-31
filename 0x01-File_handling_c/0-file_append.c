#include <stdio.h>
#include <stdlib.h>

/**
 * main - appends data into a file
 */
void main(void)
{
	char dataToAppend[5]; /*size of data to append*/
	FILE *fp = NULL; /* declare the file pointer*/

	fp = fopen("abc.txt", "a"); /* open the file*/

	if (fp == NULL) /* error handling*/
	{
		printf("Error");
		exit(1);
	}

	/* write the data to append*/
	printf("\nEnter data to append: ");
	fgets(dataToAppend, 5, stdin); /*reads the inputted data to append*/

	fputs(dataToAppend, fp); /*appends data to file*/

	/* reopen file in read mode to print file contents*/
	fp = freopen(abc.txt, "r", fp);

	/*print file contents after appending */
	printf("\nSuccesfully appended");

	fclose(fp);
}


