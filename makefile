records : readline.o dogs.o records.o
	gcc -o records readline.o dogs.o records.o

records.o : records.c dogs.c readline.c dogs.h readline.h
	gcc -c records.c

dogs.o : dogs.c dogs.h
	gcc -c dogs.c

readline.o : readline.c readline.h
	gcc -c readline.c

