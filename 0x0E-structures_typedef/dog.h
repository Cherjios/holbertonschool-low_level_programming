#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
*struct dog- Dog Structure
*@name: Dog's name
*@age: Dog's age
*@owner: Dog's owner
*
*Description: Structure that fills dos information; name, age and woner.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
