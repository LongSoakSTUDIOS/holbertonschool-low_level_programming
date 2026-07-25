u#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information for individual dogs
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: this struct contains 3 different data types in relation to dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}	dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
