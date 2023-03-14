DEFAULT_TARGET=teste
OBJECTS = FIFO.o teste.o

CFLAGS = -g -Wall -O3
LDLIBS=
CC=gcc


# Generate application
$(DEFAULT_TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(DEFAULT_TARGET) $(OBJECTS)
	

clean:
	rm -f *.o $(DEFAULT_TARGET)

run:	$(DEFAULT_TARGET)
	./$(DEFAULT_TARGET)

