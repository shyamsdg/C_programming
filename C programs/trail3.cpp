#include <stdio.h>
#include <string.h>

// Function to copy a substring from source to destination
void copySubstring(const char *source, char *destination, int start, int end) {
    int sourceLength = strlen(source);
    int destinationLength = end - start + 1;

    // Check if start and end indices are valid
    if (start < 0 || start >= sourceLength || end < start || end >= sourceLength) {
        printf("Error: Invalid start or end index.\n");
        return;
    }

    // Copy the substring from source to destination
    strncpy(destination, source + start, destinationLength);
    destination[destinationLength] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[100];

    // Test case 1: Copy the substring "Hello" from source to destination
    copySubstring(source, destination, 0, 4);
    printf("Test Case 1: Copied Substring: %s\n", destination);

    // Test case 2: Copy the substring "World!" from source to destination
    copySubstring(source, destination, 7, 12);
    printf("Test Case 2: Copied Substring: %s\n", destination);

    // Test case 3: Copy the entire source string to destination
    copySubstring(source, destination, 0, strlen(source) - 1);
    printf("Test Case 3: Copied Substring: %s\n", destination);

    // Test case 4: Invalid start and end indices
    copySubstring(source, destination, -1, 10);
    printf("Test Case 4: Copied Substring: %s\n", destination); // Output will be empty due to the error

    return 0;
}

