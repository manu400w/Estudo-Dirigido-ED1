#include <stdio.h>

 /*b) 9873 de hexadecimal para binário e para decimal.
 binario: 9873
 = 1001100001110011
 decimal: 9x16^3 + 8x16^2 + 7x16^1 + 3x16^0
 36864 + 2048 + 112 + 3
 = 39027
 */

int main() {
    char hex[] = "9873";
    int decimal, i;

    sscanf(hex, "%x", &decimal);  
    
    printf("Hexadecimal: %s\n", hex);
    printf("Decimal: %d\n", decimal);
    
    printf("Binario: ");
    for (i = 11; i >= 0; i--) {
        printf("%d", (decimal >> i) & 1);
    }
    printf("\n");

    return 0;
}
