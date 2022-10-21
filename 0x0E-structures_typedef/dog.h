#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure defination
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * dog_t - new name assigned to struct dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
