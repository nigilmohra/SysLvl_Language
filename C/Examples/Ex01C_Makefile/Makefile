# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -O2

# Output Executable Name
TARGET = MathOpTest

# Default Build Target
all: $(TARGET)

# Build Rule
$(TARGET): Main.c
	$(CC) $(CFLAGS) -o $(TARGET) Main.c

# Run 
run: $(TARGET)
	./$(TARGET)

# Clean 
clean:
	rm -f $(TARGET)

