CC=gcc

parallel_sum : parallel_sum.c utils.o
	$(CC) -o parallel_sum utils.o parallel_sum.c -std=c99 -lpthread

utils.o : utils.h
	$(CC) -o utils.o -c utils.c -std=c99

clean :
	rm parallel_sum utils.o