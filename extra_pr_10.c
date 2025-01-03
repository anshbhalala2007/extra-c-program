

#include <stdio.h>
#include <math.h>

int isPerfectNumber(int n) {
    if (n <= 1) {
        return 0;  // 1 is not a perfect number
    }

    int sum_of_divisors = 1;  // Start with 1 because 1 is a divisor of every number
    int sqrt_n = (int) sqrt(n);

    // Loop through all numbers from 2 to sqrt(n)
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;  // Add divisor i
            if (i != n / i) {
                sum_of_divisors += n / i;  // Add the paired divisor n / i
            }
        }
    }

    // Check if the sum of divisors equals the number
    return sum_of_divisors == n;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPerfectNumber(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
