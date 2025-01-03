#include <stdio.h>

int main() {
    long long n, m, a;

    // Input the dimensions of the square and flagstone
    scanf("%lld %lld %lld", &n, &m, &a);

    // Calculate the number of flagstones needed for each dimension
    long long num_flagstones_width = (n + a - 1) / a;
    long long num_flagstones_height = (m + a - 1) / a;

    // Total number of flagstones is the product of the two
    long long total_flagstones = num_flagstones_width * num_flagstones_height;

    // Output the result
    printf("%lld\n", total_flagstones);

    return 0;
}
