/* This header contains only public members and methods */

#ifndef _CAT_PUBLIC_H_
#define _CAT_PUBLIC_H_

/* inherites from Animal */
#include "animal_public.h"

typedef struct Cat_t *Cat;

/* constructor & destructor */
Cat cat_create (void);
void cat_destroy (Cat cat);

#endif /* _CAT_PUBLIC_H_ */
