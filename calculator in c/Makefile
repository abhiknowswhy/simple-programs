CC = gcc
CFLAGS = -Wall -I./basicOperations -I./complexOperations

SRC = main.c basicOperations/add.c basicOperations/subtract.c basicOperations/multiply.c basicOperations/divide.c \
      basicOperations/modulus.c complexOperations/exponent.c complexOperations/sqrt.c complexOperations/nthRoot.c

OBJ = $(SRC:.c=.o)
OUT = calculator

all: $(OUT)

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OUT)
