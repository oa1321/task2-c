CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = my_mat.o
FLAGS = -Wall -g

all: connections my_mat.a

connections: $(OBJECTS_MAIN) my_mat.a
	$(CC) $(flags)  -o main $(OBJECTS_MAIN) my_mat.a

my_mat.a: $(OBJECTS_LIB)
	$(AR) -rcs my_mat.a $(OBJECTS_LIB)
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(flags)  -c my_mat.c
	
main.o: main.c my_mat.h
	$(CC) $(flags)  -c main.c
	
.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
