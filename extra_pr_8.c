#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of vectors

    // Initialize sums for x, y, z components
    int sum_x = 0, sum_y = 0, sum_z = 0;

    // Iterate over each force vector
    for (int i = 0; i < n; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);  // Read the components of the force vector

        // Update the sum of x, y, z components
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    // Check if all sums are zero
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        printf("YES\n");  // Body is in equilibrium
    } else {
        printf("NO\n");   // Body is not in equilibrium
    }

    return 0;
}
