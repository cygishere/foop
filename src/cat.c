#include "cat_private.h"
#include "cat_public.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* constructor & destructor */
Cat
cat_create (void)
{
  Cat cat = malloc (sizeof *cat);
  _cat_setup (cat);
  return cat;
}

void
cat_destroy (Cat cat)
{
  free (cat);
}

/* private methods */
void
_cat_setup (Cat cat)
{
  _animal_setup (&cat->super);
  cat->super.say_hi = _cat_say_hi;
}

static void
_cat_say_hi (void *cat)
{
  printf ("%s: meow meow\n", ((Cat)cat)->super.name);
}
