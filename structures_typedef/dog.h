#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for struct
 * @name: char
 * @age: float
 * @owner: char
 * Description: description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_type;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif