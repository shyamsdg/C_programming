#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenateStrings(const char *str1, const char *str2, char *result) {
    if (str1 == NULL || str2 == NULL || result == NULL) {
        printf("Error: Invalid input strings or result buffer.\n");
        return;
    }

    strcpy(result, str1);
    strcat(result, str2);
}

// Function to test the 'concatenateStrings' function
void testConcatenateStrings() {
    char result[100];

    // Test case 1: Check concatenation of "Hello" and " World!"
    concatenateStrings("Hello", " World!", result);
    printf("Result: %s\n", result);

    // Test case 2: Check concatenation of empty string and "Test"
    concatenateStrings("", "Test", result);
    printf("Result: %s\n", result);

    // Test case 3: Check concatenation of "123" and "456"
    concatenateStrings("123", "456", result);
    printf("Result: %s\n", result);

    // Additional test case: Check concatenation of empty string and empty string
    concatenateStrings("", "", result);
    printf("Result: %s\n", result);
}

int main() {
    // Run the test function
    testConcatenateStrings();

    return 0;
}


