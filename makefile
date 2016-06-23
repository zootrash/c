# compiler: gcc
CC = gcc

# compiler flags:
# -g	adds debugging info to exec. file
# -Wall	turns most, not all, compiler warnings
CFLAGS = -g -Wall

# build target exec.
TARGET = myprog

# make
# gcc -g -Wall -o myprog myprog.c
all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
