#ifndef DOG_H
#define DOG_H

/**
 * dog - Defining a new type struct named dog.
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

#endif /* DOG_H */
