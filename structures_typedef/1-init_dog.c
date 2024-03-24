#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct
 * @d: var
 * @name: char
 * @age: int
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
