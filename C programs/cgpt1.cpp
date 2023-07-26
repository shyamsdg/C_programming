#include <stdio.h>

// Function prototype for factorial calculation using recursion
unsigned long long factorial(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        unsigned long long result = factorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}

// Recursive function to calculate the factorial
unsigned long long factorial(int n) {
    // Base case: Factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: Factorial of n = n * factorial(n-1)
        return n * factorial(n - 1);
    }
}

