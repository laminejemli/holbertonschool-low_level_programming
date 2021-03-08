#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	int l1, l2;
	
	l1 = _strlen(name);
	l2 = _strlen(owner);

	s = malloc (sizeof(dog_t));

	if(s == NULL)
		return (NULL);
	s->name = malloc(sizeof(char) * (l1 + 1));
	if (s->name == NULL)
	{
		free(s);
	return(NULL);
	}
	s->owner = malloc(sizeof(char) * (l2 + 1));
	if (s->owner == NULL)
	{
		free(s);
		free(s->name);
		return (NULL);
	}
	_strcpy(s->name, name);
	_strcpy(s->owner, owner);
	s->age = age;
	return (s);
}
