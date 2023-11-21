#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>
#include <stdlib.h>

struct book
{
	int pages;
	char *title;
	char *author;
};
#endif
/**
 * main - creates a structure and prints the members
 * Return: 0
 */
int main(void)
{
	/*declare variable of type struct book*/
	struct book novel;
	struct book *ptr;

	/*declare a pointer to structure and assign variable address to it*/
	ptr = &novel;

	/*allocate memory for the strings*/
	ptr->title = (char *)malloc(30 * sizeof(char));
	ptr->author = (char *)malloc(50 * sizeof(char));

	/*check if memory allocation is succesful*/
	if (ptr->title == NULL || ptr->author == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return (1);
	}

	/*print user input*/
	printf("Enter the Title: ");
	scanf("%s", ptr->title);
	printf("Enter the Pages: ");
	scanf("%d",& novel. pages);
	printf("Enter the authors name: ");
	scanf("%s", ptr->author);

	/*print information*/
	printf("The name of the book is: %s\n", novel.title);
	printf("The number of pages are:  %d\n", novel.pages);
	printf("The name of the Author is: %s\n", novel.author);

	/*free allocated memory*/
	free(ptr->title);
	free(ptr->author);

	return (0);
}
