all : t1 t2 t3 t4 t5

t1: t1.c
	gcc t1.c -o t1

t2: t2.c
	gcc t2.c -o t2

t3: t3.c 
	gcc t3.c -o t3

t4: t4.c
	gcc t4.c -o t4



