#Mutlu Can Gürbüz, S004451

CC=gcc

CFLAGS=-c -Wall

prog: comp

comp: qdriver.o queue.o
	$(CC) qdriver.o queue.o -o qdriver

qdriver.o: qdriver.c queue.c queue.h
	$(CC) $(CFLAGS) qdriver.c 
	
queue.o: queue.c queue.h
	$(CC) $(CFLAGS) queue.c

clean:
	rm -rf *o *log qdriver
