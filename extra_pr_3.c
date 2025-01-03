#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Find the number of digits in the number
    while (num != 0) {
        num /= 10;  // Remove the last digit
        ++n;  // Count the number of digits
    }

    // Reset num to the original number
    num = originalNum;

    // Calculate the sum of each digit raised to the power of n
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        result += pow(remainder, n);  // Add the nth power of the digit
        num /= 10;  // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
