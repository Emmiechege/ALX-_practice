#include <stdio.h>
#include <stdlib.h>

struct automobile
{
	char *model;
	char *colour;
	int mileage;
}
/**
 * pickup - allocates memory to a structure
 * @model: structure member
 * @colour: structure member
 * @mileage: structure member
 * Return: ptr
 */

struct automobile *pickup(char *model, char *colour, int mileage)
{
	struct automobile *ptr;

	ptr = &pickup;

	ptr->pickup = malloc(sizeof(struct automobile));

	if (ptr == NULL)
	{
		perror("Memory allocation failed");
		return (1);
	}

	ptr->model = model;
	ptr->colour = colour;
	ptr->mileage = mileage;

	return (ptr);
}
/**
 * main - prints structure members
 * Return: 0
 */

int main(void)
{
	struct automobile *ptr;

	ptr = pickup("double cabin", "grey", "40km/24hr");
	if (ptr == NULL)
	{
		return (1);
	}
	printf("The new car model %s is registered\n", ptr->model);
	printf("It is %s in colour \n", ptr->colour);
	printf("It has a mileage of %d\n", ptr->mileage);

	return (0);
}


