#include "dog.h"

/**
 * init_dog - Inicia una variable
 * @d: puntero a la estructutra
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueño del perro
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
