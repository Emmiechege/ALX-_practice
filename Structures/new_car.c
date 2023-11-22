#include <stdio.h>
#include <stdlib.h>

struct automobile
{
	char *model;
	char *colour;
	int mileage;
}

struct automobile *pickup(char *model, char *colour, int mileage)
{
	struct automobile *ptr;
	ptr = &pickup;

	ptr = malloc(sizeof(struct automobile));

	if (ptr == NULL)
	{
		perror("Memory allocation failed");
		return (1);
	}

