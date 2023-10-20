#ifndef DOG_INFO_H
#define DOG_INFO_H

/**
 * struct dog - contains info about a dog
 * @name: the name of the dog stored as a string
 * @age: the age of the dog stored as a floating-point number
 * @owner: the name of the dog's owner stored as a string
**/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
