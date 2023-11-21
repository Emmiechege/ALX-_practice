#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = &new_user;

	user->name = (char *)malloc(sizeof(char));
	user->email = (char *)malloc(sizeof(char));

	if user->name == NULL || user->email == NULL)
	{
		perror("Memory allocation failed");
		return (1);
	}

	printf("Enter name: ");
	scanf("%s\n", user->name);
	printf("Enter email: ");
	scanf("%s\n", user->emil);
	printf("Enter age: ");
	scanf("%d", new_user.age);

	return (user);
}
