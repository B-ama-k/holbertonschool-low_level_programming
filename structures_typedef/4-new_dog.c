#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - create a new dog
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: new dog (pug), error (NULL).
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pug = malloc(sizeof(dog_t));

	if (!pug)
		return (NULL);

	pug->name = malloc(strlen(name) + 1);
	if (!pug->name)
	{
		free(pug);
			return (NULL);
	}

	pug->owner = malloc(strlen(owner) + 1);
	if (!pug->owner)
	{
		free(pug->name);
		free(pug);
			return (NULL);
	}

	strcpy(pug->name, name);
	strcpy(pug->owner, owner);
		pug->age = age;

	return (pug);
}
