#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*_strdup-Function that returns a pointer to a newly allocated space in memory
*
*@str: char value
*
*Return: a char value
*/
char *_strdup(char *str)
{
	char *s, *copy = str;
	int count = 0, i;

	if (str != NULL)
	{
		while (*str)
		{
			count++;
			str++;
		}
		s = malloc(((count + 1) * sizeof(char)));
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < count; i++)
		{
			s[i] = copy[i];
		}
		s[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}
/**
*new_dog-Function that concatenates a new dog structure and copy
*
*@name: Char value
*@age: Float value
*@owner: Char value
*
*Return: Always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	char *copy_name, *copy_owner;

	if (!name)
		name = "";
	if (!owner)
		owner = "";
	copy_dog = malloc(sizeof(dog_t));
	if (!copy_dog)
		return (0);
	copy_name = _strdup(name);
	if (!copy_name)
	{
		free(copy_dog);
		return (0);
	}
	copy_owner = _strdup(owner);
	if (!copy_owner)
	{
		free(copy_name);
		free(copy_dog);
		return (0);
	}
	copy_dog->name = copy_name;
	copy_dog->age = age;
	copy_dog->owner = copy_owner;

	return (copy_dog);

}
