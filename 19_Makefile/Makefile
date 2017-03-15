CC = g++

calculo: main.o matematicas.o
	$(CC) main.o matematicas.o -o calculo

main.o: main.cpp
	$(CC) -c main.cpp

matematicas.o: matematicas.cpp
	$(CC) -c matematicas.cpp

.PHONY: clean

clean:
	$(RM) *.o
