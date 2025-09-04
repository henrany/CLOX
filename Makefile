# Set the executable name (by default, use the current directory name)
EXEC := $(notdir $(CURDIR))

# Collect all .c files in the current directory
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS := -g -Wall -Wextra -std=c99 -g

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

# Catch .c files without a .h file (not all .c need .h)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)