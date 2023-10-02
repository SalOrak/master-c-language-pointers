
CC=gcc

CFLAGS=-Wall -pedantic -Werror
LDFLAGS=

SRC1 = challenge-1/main.c challenge-1/challenge-1.c
SRC2 = challenge-2/main.c challenge-2/challenge-2.c
SRC3 = challenge-3/main.c challenge-3/challenge-3.c
SRC4 = challenge-4/main.c challenge-4/challenge-4.c

OUT = bin/solution

PHONY: all c1 c2 c3 c4

c1: $(SRC1)
	@echo "------------------------"
	@echo "Compiling challenge 1..."
	$(CC) -o "$(OUT)-1" $(SRC1)	
	@echo "Successfully compiled!"
	@chmod +x "$(OUT)-1"
	@echo "------------------------"

c2: $(SRC2)
	@echo "------------------------"
	@echo "Compiling challenge 2..."
	$(CC) -o "$(OUT)-2" $(SRC2)	
	@echo "Successfully compiled!"
	@chmod +x "$(OUT)-2"
	@echo "------------------------"

c3: $(SRC3)
	@echo "------------------------"
	@echo "Compiling challenge 3..."
	$(CC) -o "$(OUT)-3" $(SRC3)	
	@echo "Successfully compiled!"
	@chmod +x "$(OUT)-3"
	@echo "------------------------"

c4: $(SRC4)
	@echo "------------------------"
	@echo "Compiling challenge 4..."
	$(CC) -o "$(OUT)-4" $(SRC4)	
	@echo "Successfully compiled!"
	@chmod +x "$(OUT)-4"
	@echo "------------------------"

all: c1 c2 c3 c4
	@echo "Compiled all solutions!"
