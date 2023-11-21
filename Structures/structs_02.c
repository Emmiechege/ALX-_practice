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

	novel.title = "The power of confidence";
	novel.pages = 500;
	novel.author = "Emmie Chege";

	printf("Enter the Title: ");
	scanf("%s", ptr->title);
	printf("Enter the Pages: ");
	scanf("%d",novel. pages);
	printf("Enter the authors name: ");
	scanf("%s", ptr->author);

	printf("The name of the book is: %s\n", novel.title);
	printf("The number of pages are:  %d\n", novel.pages);
	printf("The name of the Author is: %s\n", novel.author);

	return (0);
}
