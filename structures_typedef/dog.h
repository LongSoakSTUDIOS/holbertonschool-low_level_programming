#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information for individual dogs
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: this struct contains 3 different data types in relation to dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
