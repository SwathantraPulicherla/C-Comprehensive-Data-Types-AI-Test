CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = temperature_monitor
SOURCES = main.c sensor.c utils.c
HEADERS = sensor.h utils.h

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean