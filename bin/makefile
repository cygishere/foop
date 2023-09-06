CC := cc
CFLAGS := -Wall -Wextra -std=c11 -pedantic
CFLAGS += -g3
LIBS := -fsanitize=address

SRC := ../src

.PHONY: default
default: run

.PHONY: run
run: foop
	./foop

.PHONY: clean
clean:
	rm foop
	rm *.o

foop: main.o animal.o cat.o dog.o
	$(CC) $(LIBS) -o $@ $^

animal.o: $(SRC)/animal.c $(SRC)/animal_public.h $(SRC)/animal_private.h
	$(CC) $(CFLAGS) -c $@ $<

cat.o: $(SRC)/cat.c $(SRC)/cat_public.h $(SRC)/cat_private.h
	$(CC) $(CFLAGS) -c $@ $<

dog.o: $(SRC)/dog.c $(SRC)/dog_public.h $(SRC)/dog_private.h
	$(CC) $(CFLAGS) -c $@ $<

main.o: $(SRC)/main.c $(SRC)/cat_public.h $(SRC)/animal_public.h
	$(CC) $(CFLAGS) -c $@ $<
