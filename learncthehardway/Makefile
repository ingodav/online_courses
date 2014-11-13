CC=gcc
#INC = -I/ex1 -I/ex2 -I/ex3
CFLAGS=-Wall -g 
OBJS = ex1 ex3 ex4 ex5 ex6

all: ex1 ex2 ex3 ex4 ex5 ex6

ex1:
	$(CC) $(CFLAGS) ex1.c -o ex1

ex2: ex1

ex3: 
	$(CC) $(CFLAGS) ex3.c -o ex3

ex4: 
	$(CC) $(CFLAGS) ex4.c -o ex4

ex5:
	$(CC) $(CFLAGS) ex5.c -o ex5


ex6:
	$(CC) $(CFLAGS) ex6.c -o ex6


clean:
	rm -rf $(OBJS)
