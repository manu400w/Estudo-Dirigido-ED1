#include <stdio.h>

 /*c) 9135 de decimal para binário e para hexadecimal.
 binario: 9135 / 2 = 4567 resto 1, 4567 / 2 = 2283 resto 1, 2283 / 2 = 1141 resto 1, 1141 / 2 = 570 resto 1, 570 / 2 = 285 resto 0, 285 / 2 = 142 resto 1, 142 / 2 = 71 resto 0, 71 / 2 = 35 resto 1, 35 / 2 = 17 resto 1, 17 / 2 = 8 resto 1, 8 / 2 = 4 resto 0, 4 / 2 = 2 resto 0, 2 / 2 = 1 resto 0, 1 / 2 = 0 resto 1. 
 = 10001110101111
 hexadecimal: 9135 / 16 = 570 resto 15, 570 / 16 = 35 resto 10, 35 / 16 = 2 resto 3, 2 / 16 = 0 resto 2.
 = 23AF
 */
 
int main() {
	int decimal = 9135;
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
