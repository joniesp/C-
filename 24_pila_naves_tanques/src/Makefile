CC = g++
IDIR = ../includes
DDIR = ../dist

CFLAGS = -g -I$(IDIR)

DEPS = $(wildcard $(IDIR)/*.h)
OBJS = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

TARGET = nave

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(CFLAGS) $^

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

.PHONY: clean dist

clean:
	$(RM) *.o

dist: clean
	mv $(TARGET) $(DDIR)
