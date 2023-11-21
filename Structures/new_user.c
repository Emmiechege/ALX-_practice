#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};
/**
 * new_user - allocates memory to a structure
 * @name: struct member
 * @email: struct member
 * @age: struct member
 * Return: user
 */

struct User *new_user(char *name, char *email, int age)
{
	/*Declare a pointer to a User structure*/
	struct User *user;
	/*Allocate memory for the structure*/
	user = malloc(sizeof(struct User));
	if (user == NULL)/*check if memory alocation was succesful*/
	{
		return (NULL);
	}
	user->name = name;
	user->email = email;
	user->age = age;
	return (user);
}
/**
 * main - prints members of a structure
 * Return: 0
 */
int main(void)
{
	struct User *user;

	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("User %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	return (0);
}
