#ifndef DOG_H
#define DOG_H

/**
 * struct dog - tipo de datos del perro
 * @name: nombre
 * @age: edad
 * @owner: dueño
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef de la estructura del perro
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
