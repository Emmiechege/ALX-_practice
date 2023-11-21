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
	struct book novel;
	struct book *ptr;

	ptr = &novel;

	ptr->title = (char *)malloc(30 * sizeof(char));
	ptr->author = (char *)malloc(50 * sizeof(char));

	if (ptr->title == NULL || ptr->author == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return (1);
	}

	printf("Enter the Title: ");
	scanf("%s", ptr->title);
	printf("Enter the Pages: ");
	scanf("%d",& novel. pages);
	printf("Enter the authors name: ");
	scanf("%s", ptr->author);

	printf("The name of the book is: %s\n", novel.title);
	printf("The number of pages are:  %d\n", novel.pages);
	printf("The name of the Author is: %s\n", novel.author);

	return (0);
}
