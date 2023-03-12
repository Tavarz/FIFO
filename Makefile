# This is a comment
# Generate application
teste: teste.o FIFO.o
	gcc -o teste teste.o FIFO.o
	
#generate FIFO.o
FIFO.o: FIFO.c FIFO.h
	gcc -c FIFO.c
	
#generate teste.o
teste.o: teste.c
	gcc -c teste.c
	
clean:
	rm *.o

