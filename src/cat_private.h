/* This header contains only private members and methods
 * Users do not need this header
 */

#ifndef _CAT_PRIVATE_H_
#define _CAT_PRIVATE_H_

/* inherites from Animal */
#include "animal_private.h"
#include "cat_public.h"

struct Cat_t
{
  struct Animal_t super;
};

/* private method */
void _cat_setup (Cat cat);
/* use static keyword to prevent external linkage to make this method "truely"
 * private */
static void _cat_say_hi (void *cat);

#endif /* _CAT_PRIVATE_H_ */
