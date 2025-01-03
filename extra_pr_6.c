#include <stdio.h>
#include <string.h>
#include <math.h>


void binaryToOctal(char binary[]) {
    int length = strlen(binary);

   
    int padding = 3 - (length % 3);
    if (padding != 3) {
        
        memmove(binary + padding, binary, length + 1); 
        for (int i = 0; i < padding; i++) {
            binary[i] = '0'; 
        }
    }

   
    printf("Octal equivalent: ");
    for (int i = 0; i < strlen(binary); i += 3) {
        
        int decimal = 0;
        for (int j = 0; j < 3; j++) {
            decimal += (binary[i + j] - '0') * pow(2, 2 - j); 
        }
        printf("%d", decimal);
    }
    printf("\n");
}

int main() {
    char binary[100];


    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToOctal(binary);

    return 0;
}
