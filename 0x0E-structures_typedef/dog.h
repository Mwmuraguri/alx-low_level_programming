#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic info of a dog
 *
 * @name: information
 * @age: info
 * owner: info
 *
 * description - long description
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

/**
 * dog_t - typedef
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
