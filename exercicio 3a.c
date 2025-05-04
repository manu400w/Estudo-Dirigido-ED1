#include <stdio.h>

 /*a) 7CD de hexadecimal para binário e para decimal.
 binario: 7CD
 = 011111001101
 decimal: 7x16^2 + 12x16^1 + 13x16^0
 1972 + 192 + 13
 = 1997
 */
 
int main() {
    char hex[] = "7CD";
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
