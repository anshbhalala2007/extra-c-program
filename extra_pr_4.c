#include <stdio.h>

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // a modulo b
        a = temp;
    }
    return a;
}

// Function to calculate LCM (Lowest Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  // Using the LCM formula
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate LCM
    int result = lcm(num1, num2);

    // Output the result
    printf("The LCM of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
