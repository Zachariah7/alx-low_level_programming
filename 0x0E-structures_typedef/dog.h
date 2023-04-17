#ifndef dog_h
#define dog_h

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Dog struct.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The owner's name.
 *
 * Description: A dog struct.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
