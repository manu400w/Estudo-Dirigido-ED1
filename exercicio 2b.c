#include <stdio.h>

 /*b) 4021 de decimal para binário e para hexadecimal.
 binario: 4021 / 2 = 2010 resto 1, 2010 / 2 = 1005 resto 0, 1005 / 2 = 502 resto 1, 502 / 2 = 251 resto 0, 251 / 2 = 125 resto 1, 125 / 2 = 62 resto 1, 62 / 2 = 31 resto 0, 31 / 2 = 15 resto 1, 15 / 2 = 7 resto 1, 7 / 2 = 3 resto 1, 3 / 2 = 1 resto 1, 1 / 2 = 0 resto 1.
 = 111110110101
 hexadecimal: 4021 / 16 = 251 resto 5, 251 / 16 = 15 resto 11, 15 / 16 = 0 resto 15
 = FB5
 */
 
int main() {
	int decimal = 4021;
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
