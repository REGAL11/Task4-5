CC = gcc

CFLAGS = -g -Wall
LFLAGS = -l m

TARGET = solv

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(LFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)