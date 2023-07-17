#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defining a new type struct named dog.
 * @name: First element - Name of dog of type char *.
 * @age: Second element - Age of dog of type float.
 * @owner: Third element - Dog's owner of type char *.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog - A new name for the new type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
