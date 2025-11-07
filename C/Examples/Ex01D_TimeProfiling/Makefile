# Makefile for TimeProfile 

# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -O2 -std=c11

# Source File (all C sources)
SRC = TimeProfile.c

# Output Executable Name
TARGET = TimeProfile

# Default Target
all: $(TARGET)

# Build the Executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean Build
clean:
	rm -f $(TARGET) *.o

# Phony Targets
.PHONY: all clean

