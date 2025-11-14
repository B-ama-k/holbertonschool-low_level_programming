#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copy a string
 * @d: destination
 * @s: source
 * Return: pointer to d
 */
char *_strcpy(char *d, char *s)
{
	int i = 0;

	while ((d[i] = s[i]))
		i++;
	return (d);
}

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(_strlen(owner) + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
