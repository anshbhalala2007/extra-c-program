#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    originalNum = num;

    
    while (num != 0) {
        num /= 10;  
        ++n;  
    }

    
    num = originalNum;

    
    while (num != 0) {
        remainder = num % 10;  
        result += pow(remainder, n);  
        num /= 10;  
    }

    
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
