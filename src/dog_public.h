/* This header contains only public members and methods */

#ifndef _DOG_PUBLIC_H_
#define _DOG_PUBLIC_H_

/* inherites from Animal */
#include "animal_public.h"

typedef struct Dog_t *Dog;

/* constructor & destructor */
Dog dog_create (void);
void dog_destroy (Dog dog);

#endif /* _DOG_PUBLIC_H_ */
