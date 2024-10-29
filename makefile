all: t1 t2 t3 t4 t5

t1: t1.o
	gcc t1.o -o t1
t2: t2.o
	gcc t2.o -o t2
t3: t3.o
	gcc t3.o -o t3
t4: t4.o
	gcc t4.o -o t4
t5: t5.o
	gcc t5.o -o t5


t1.o: t1.c
	gcc -c t1.c
t2.o: t2.c
	gcc -c t2.c
t3.o: t3.c
	gcc -c t3.c
t4.o: t4.c
	gcc -c t4.c
t5.o: t5.c
	gcc -c t5.c

