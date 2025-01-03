#include <stdio.h>

int main() {
    double H, L;

    
    scanf("%lf %lf", &H, &L);

    double D = (L * L - H * H) / (2 * H);
    

   
    printf("%.15f\n", D);

    return 0;
}
