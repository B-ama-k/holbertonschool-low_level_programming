#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* _strlen: lenght of the str.
* @s: str to check.
* Return: lenght of s.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
* _strcpy - copy a str.
* @d: dest of the str.
* @s: source of the str.
* Return: the str.
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
* @name: name of the new dog
* @age: age of the new dog
* @owner: owner of the new dog
* Return: new dog (pug), error (NULL).
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);
	if (!dog->name)
		return (NULL);

	dog->owner = malloc(_strlen(owner) + 1);
	if (!dog->owner)
		return (NULL);

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
