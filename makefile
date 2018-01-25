maskin:  main.o fetch.o execute.o
	gcc -o maskin main.o fetch.o execute.o

execute.o:
	gcc -g -c execute.c

fetch.o:
	gcc -g -c fetch.c

main.o:
	gcc -g -c main.c

clean:
	rm -f *.o *~
