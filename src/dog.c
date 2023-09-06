#include "dog_private.h"
#include "dog_public.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* constructor & destructor */
Dog
dog_create (void)
{
  Dog dog = malloc (sizeof *dog);
  _dog_setup (dog);
  return dog;
}

void
dog_destroy (Dog dog)
{
  free (dog);
}

/* private methods */
void
_dog_setup (Dog dog)
{
  _animal_setup (&dog->super);
  dog->super.say_hi = _dog_say_hi;
}

static void
_dog_say_hi (void *dog)
{
  printf ("%s: woof woof\n", ((Dog)dog)->super.name);
}
