#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: the dog's name
 * @owner: the dog's owner
 * @age: the dog's age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * Function Prototypes
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
