#ifndef PERSON_H
#define PERSON_H
/*structures are defined in the .h files*/
struct person
{
	char *name;
	int age;
	char school[20]
};
#endif

#include <stdio.h>
/**
 * main - creates a structure
 * Return: 0
 */

int main(void)
{
	struct person person1;

	person1.name = "Emmie";
	person1.age = 22;
	person1.school = "ALX";
	Return(0);
}
