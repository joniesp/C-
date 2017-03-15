CC = g++

juego: main.o funciones.o
	$(CC) main.o funciones.o -o juego

main.o: main.cpp
	$(CC) -c main.cpp

funciones.o: funciones.cpp
	$(CC) -c funciones.cpp

.PHONY: clean

clean:
	$(RM) *.o
