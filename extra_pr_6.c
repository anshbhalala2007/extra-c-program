#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to octal
void binaryToOctal(char binary[]) {
    int length = strlen(binary);

    // Make the length of the binary string a multiple of 3 by adding leading zeros
    int padding = 3 - (length % 3);
    if (padding != 3) {
        // Shift the binary string to the left by adding the required number of leading zeros
        memmove(binary + padding, binary, length + 1); // Shift original string
        for (int i = 0; i < padding; i++) {
            binary[i] = '0';  // Add leading zeros
        }
    }

    // Now process the binary string in chunks of 3
    printf("Octal equivalent: ");
    for (int i = 0; i < strlen(binary); i += 3) {
        // Convert each 3-bit chunk to its octal equivalent
        int decimal = 0;
        for (int j = 0; j < 3; j++) {
            decimal += (binary[i + j] - '0') * pow(2, 2 - j); // Convert binary chunk to decimal
        }
        printf("%d", decimal);
    }
    printf("\n");
}

int main() {
    char binary[100];

    // Input binary number from the user
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Convert binary to octal
    binaryToOctal(binary);

    return 0;
}
