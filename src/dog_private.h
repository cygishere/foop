/* This header contains only private members and methods
 * Users do not need this header
 */

#ifndef _DOG_PRIVATE_H_
#define _DOG_PRIVATE_H_

/* inherites from Animal */
#include "animal_private.h"
#include "dog_public.h"

struct Dog_t
{
  struct Animal_t super;
};

/* private method */
void _dog_setup (Dog dog);
/* use static keyword to prevent external linkage to make this method "truely"
 * private */
static void _dog_say_hi (void *dog);
#endif /* _DOG_PRIVATE_H_ */
