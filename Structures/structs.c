#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
/*structures are defined in the .h files*/
struct person
{
	char *name;
	int age;
	char *school;
};
#endif

/**
 * main - creates a structure
 * Return: 0
 */

int main(void)
{
	struct person person1;
/*define the structure members*/
	person1.name = "Emmie";
	person1.age = 22;
	person1.school = "ALX";

	return(0);
}
