#include "animal_private.h"
#include "animal_public.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* constructor & destructor */
Animal
animal_create (void)
{
  Animal animal = malloc (sizeof *animal);
  _animal_setup (animal);
  return animal;
}

void
animal_destroy (Animal animal)
{
  free (animal);
}

/* getters & setters */
const char *
animal_get_name (Animal animal)
{
  return animal->name;
}

unsigned int
animal_get_color (Animal animal)
{
  return animal->color;
}

Animal
animal_set_name (Animal animal, const char *name)
{
  strncpy (animal->name, name, sizeof animal->name);
  return animal;
}

Animal
animal_set_color (Animal animal, unsigned int color)
{
  animal->color = color;
  return animal;
}

/* other public methods */
void
animal_say_hi (Animal animal)
{
  if (animal->say_hi == NULL)
    {
      printf ("It seems %s don't know how to say hi\n", animal->name);
    }
  else
    {
      animal->say_hi (animal);
    }
}

/* private method */
void
_animal_setup (Animal animal)
{
  strcpy (animal->name, "noname");
  animal->color = 0xff0000;
  animal->say_hi = NULL;
}
