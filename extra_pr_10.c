

#include <stdio.h>
#include <math.h>

int isPerfectNumber(int n) {
    if (n <= 1) {
        return 0;  
    }

    int sum_of_divisors = 1;  
    int sqrt_n = (int) sqrt(n);

   
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            sum_of_divisors += i;  
            if (i != n / i) {
                sum_of_divisors += n / i;  
            }
        }
    }

    
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
