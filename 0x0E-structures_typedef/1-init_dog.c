#include <stdio.h>
#include "dog.h"

/**
*init_dog-Function that concatenates two strings
*
*@d: dog sgruct
*@name: char value
*@age: float value
*@owner: char owner
*
*Return: Always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
