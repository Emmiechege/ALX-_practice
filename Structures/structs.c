#include <stdio.h>
/**
 * main - creates a structure
 * Return: 0
 */
struct person
{
	char *name;
	int age;
	char school[20];
};

int main(void)
{
	struct person person1;

	person1.name = "Emmie";
	person1.age = 22;
	person1.school = "ALX";
	Return(0);
}
