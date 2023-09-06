/* Users only have access to public interfaces declared through public
 * headers */
#include "animal_public.h"
#include "cat_public.h"
#include "dog_public.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (void)
{
  Animal my_animal = animal_create ();
  /* Encapsulation:
   * User cannot access any private member of my_animal, but can
   * access public members using getters and setters.
   *
   * _animal_do_sth_private (my_animal); // Since user should not have and
   *                                     // include "animal_private.h", this
   *                                     //  will lead to a compiler error.
   */
  animal_say_hi (my_animal);
  animal_destroy (my_animal);

  Cat my_cat = cat_create ();
  animal_set_name ((Animal)my_cat, "Tom");
  /* Inheritance:
   * my_cat calling its parent's method
   *
   * Encapsulation ++:
   * Unable to call _cat_say_hi () directly even if the user included the
   * private header, since that will give a linker error.
   */
  animal_say_hi ((Animal)my_cat);
  cat_destroy (my_cat);

  Dog my_dog = dog_create ();
  animal_set_name ((Animal)my_dog, "Spike");
  /* Polymorphism: */
  animal_say_hi ((Animal)my_dog);
  dog_destroy (my_dog);

  return 0;
}
