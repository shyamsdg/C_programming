#include <stdio.h>

// Function prototype
void modifyStaticVarByReference(int *ptr);
void modifyStaticVarByValue(int value);

int main() {
    // Static variable inside the main function
    static int staticVar = 10;

    // Printing the initial value of the static variable
    printf("Initial value of staticVar: %d\n", staticVar);

    // Call the function to modify the static variable by reference
    modifyStaticVarByReference(&staticVar);

    // Printing the value of the static variable after modifying by reference
    printf("Value of staticVar after modifyStaticVarByReference: %d\n", staticVar);

    // Call the function to modify the static variable by value
    modifyStaticVarByValue(20);

    // Printing the value of the static variable after modifying by value
    printf("Value of staticVar after modifyStaticVarByValue: %d\n", staticVar);

    return 0;
}

// Function to modify the static variable by reference (pointer)
void modifyStaticVarByReference(int *ptr) {
    // Increment the static variable by 5 using the pointer
    *ptr += 5;
    printf("Value of staticVar inside modifyStaticVarByReference: %d\n", *ptr);
}

// Function to modify the static variable by value
void modifyStaticVarByValue(int value) {
    // Assign the static variable a new value directly
    int staticVar = value;
    printf("Value of staticVar inside modifyStaticVarByValue: %d\n", staticVar);
}

