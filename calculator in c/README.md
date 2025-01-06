Simple project to demonstrate how to use Makefile in C and write modular code

To compile this project:

> make


Output:
```
gcc -Wall -I./basicOperations -I./complexOperations -c main.c -o main.o
gcc -Wall -I./basicOperations -I./complexOperations -c basicOperations/add.c -o basicOperations/add.o
gcc -Wall -I./basicOperations -I./complexOperations -c basicOperations/subtract.c -o basicOperations/subtract.o
gcc -Wall -I./basicOperations -I./complexOperations -c basicOperations/multiply.c -o basicOperations/multiply.o
gcc -Wall -I./basicOperations -I./complexOperations -c basicOperations/divide.c -o basicOperations/divide.o
gcc -Wall -I./basicOperations -I./complexOperations -c basicOperations/modulus.c -o basicOperations/modulus.o
gcc -Wall -I./basicOperations -I./complexOperations -c complexOperations/exponent.c -o complexOperations/exponent.o
gcc -Wall -I./basicOperations -I./complexOperations -c complexOperations/sqrt.c -o complexOperations/sqrt.o
gcc -Wall -I./basicOperations -I./complexOperations -c complexOperations/nthRoot.c -o complexOperations/nthRoot.o
gcc main.o basicOperations/add.o basicOperations/subtract.o basicOperations/multiply.o basicOperations/divide.o basicOperations/modulus.o complexOperations/exponent.o complexOperations/sqrt.o complexOperations/nthRoot.o -o calculator
```

To run the project:
> calculator

Output:
```
Welcome to the Calculator!
Choose an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exponentiation
7. Square Root
8. Nth Root
Enter your choice: 1
Enter two numbers: 5 3
Result: 8.00
```


To delete all the executable files

>make clean
