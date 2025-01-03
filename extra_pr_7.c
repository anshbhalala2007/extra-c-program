#include <stdio.h>

int main() {
    long long n, m, a;

    
    scanf("%lld %lld %lld", &n, &m, &a);

  
    long long num_flagstones_width = (n + a - 1) / a;
    long long num_flagstones_height = (m + a - 1) / a;

   
    long long total_flagstones = num_flagstones_width * num_flagstones_height;


    printf("%lld\n", total_flagstones);

    return 0;
}
