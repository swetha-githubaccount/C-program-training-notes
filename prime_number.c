#include <stdio.h>
#include <stdbool.h>

// Function to check whether a given number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to print all prime numbers below a given value
void printPrimesBelow(int limit) {
    printf("Prime numbers below %d are:\n", limit);
    for (int i = 2; i < limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Function to print the first n prime numbers
void printNPrimes(int n) {
    printf("First %d prime numbers are:\n", n);
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int choice, num;
    
    while(1) {
        printf("\nChoose an option:\n");
        printf("1. Check if a number is prime\n");
        printf("2. Print all prime numbers below a value\n");
        printf("3. Print the first n prime numbers\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number to check: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printPrimesBelow(num);
                break;
            case 3:
                printf("Enter the value of n: ");
                scanf("%d", &num);
                printNPrimes(num);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }

    return 0;
}
