#include <stdio.h>
#include <stdlib.h>

struct dog
{
	*char name;
	float age;
	*char owner;
};
/**
 * this_dog - a new structure
 * @name: structure member
 * @age: structure member
 * @owner: structure member
 * Return: pointer to variable
 */
struct dog *this_dog(*char name, float age, *char owner)
{
	struct dog my_dog;/*define pointer to help us access members*/

	my_dog = malloc(sizeof(struct dog));/*allocate memory to the structure*/
	if (my_dog == NULL)
	{
		perror("Memory allocation failed");
	}

	my_dog-> = name;
	my_dog-> = age;
	my_dog-> = owner;

	return(my_dog);
}

