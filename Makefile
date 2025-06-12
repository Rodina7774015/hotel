
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = hotel_program
SOURCES = hotel.c menu.c 
HEADERS = hotel.h scanf.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clear
