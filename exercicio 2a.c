#include <stdio.h>

 /*a) 297 de decimal para binário e para hexadecimal
 binario: 297 / 2 = 148 resto 1, 148 / 2 = 74 resto 0, 74 / 2 = 37 resto 0, 37 / 2 = 1, 18 / 2 = 9 resto 0, 9 / 2 = 4 resto 1, 4 / 2 = resto 0, 2 / 2 = 1 resto 0, 1 / 2 = 0 resto 1.
 = 100101001
 hexadecimal: 297 / 16 = 18 resto 9, 18 / 16 = 1 resto 2, 1 / 16 = 0 resto 1;
 = 129
 */
 
int main() {
	int decimal = 297;
	int i;

    printf("Decimal: %d\n", decimal);

    printf("Binario: ");
    for (i = 8 * sizeof(decimal) - 1; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        if (bit || i < 9) 
            printf("%d", bit);
    }
    printf("\n");

    printf("Hexadecimal: %X\n", decimal);
	
	return 0;
} 
