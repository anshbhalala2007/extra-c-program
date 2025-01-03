#include <stdio.h>

int main() {
    double H, L;

    // Read the input values for H and L
    scanf("%lf %lf", &H, &L);

    // Compute the depth of the lake at point A
    double D = (L * L - H * H) / (2 * H);

    // Print the result with high precision
    printf("%.15f\n", D);

    return 0;
}
