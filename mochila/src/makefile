CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c algoritimogenetico.c algoritimogenetico.h
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=main

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean: 
	rm -f *~ *.o $(EXECUTABLE)

