/* This header contains only public members and methods */

#ifndef _ANIMAL_PUBLIC_H_
#define _ANIMAL_PUBLIC_H_

#include <stdbool.h>

#define MAX_STR_LENGTH 256

/* opaque type for animal (Encapsulation) */
typedef struct Animal_t *Animal;

/* constructor & destructor */
Animal animal_create (void);
void animal_destroy (Animal animal);

/* getters & setters */
const char *animal_get_name (Animal animal);
unsigned int animal_get_color (Animal animal);

Animal animal_set_name (Animal animal, const char *eats);
Animal animal_set_color (Animal animal, unsigned int color);

/* other public methods */
void animal_say_hi (Animal animal);

#endif /* _ANIMAL_PUBLIC_H_ */
