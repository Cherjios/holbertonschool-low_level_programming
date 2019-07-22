#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
*struct dog- Dog Structure
*@name: Dog's name
*@age: Dog's age
*@owner: Dog's owner
*
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
