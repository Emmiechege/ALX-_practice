#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * main - reads into a file and  displays the file contents line by line
 * fgets() function is used to read a string of characters
 */
void main(void)
{
	char ch[30]; /*initialize the string pointer */
	int totalread = 0; /* variable for holding total characters read*/

	FILE *fp = NULL;

	fp = fopen("abc.txt"

