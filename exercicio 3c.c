#include <stdio.h>

 /*c) 2F5AB de hexadecimal para binário e para decimal.
 binario: 2F5AB
 = 101111010110101011
 decimal: 2x16^4 + 15x16^3 + 5x16^2 + 10x16^1 + 11x16^0
 131072 + 61440 + 1280 + 160 + 11
 = 193963
 */
 
int main() {
    char hex[] = "2F5AB";
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
