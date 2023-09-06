/* This header contains only private members and methods
 * Users do not need this header
 */

#ifndef _ANIMAL_PRIVATE_H_
#define _ANIMAL_PRIVATE_H_

#include "animal_public.h"

typedef void (*Animal_say_hi) (void *animal);

struct Animal_t
{
  char name[MAX_STR_LENGTH];
  unsigned int color; /* hex color like: 0xff0000 */
  Animal_say_hi say_hi;
};

/* private method */
void _animal_setup (Animal animal);
void _animal_do_sth_private (Animal animal);

#endif /* _ANIMAL_PRIVATE_H_ */
