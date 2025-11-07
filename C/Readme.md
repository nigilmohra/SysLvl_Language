# Creating a Makefile for C Programs

As C programs grow, manually compiling each file can be tedious. A **Makefile** automates this process, saving time and reducing errors. It specifies how to build your program and handles dependencies automatically.

"""
# A Generic Make File
# Compiler
CC = gcc

# Compiler Flags (Warnings, Debugging Info)
CFLAGS = -Wall -Wextra -g

# Target Executable
TARGET = feast_impl

# Source Files
SRCS = 

# Object Files
OBJS = $(SRCS:.c=.o)

# Default Rule to Build the Program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	
# Rule to Build .o file from .c Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
# Clean Rule to Remove Object Files and Executables
clean:
	rm -f $(OBJS) $(TARGET)
"""
