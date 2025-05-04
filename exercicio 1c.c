#include <stdio.h>
#include <math.h>
#include <string.h>

  /* c) 1111010110110 de binario para decimal e para hexadecimal.
  decimal: 1x2^12 + 1x2^11 + 1x2^10 + 1x2^9 + 0x2^8 + 1x2^7 + 0x2^6 + 1x2^5 + 1x2^4 + 0x2^3 + 1x2^2 + 1x2^1 + 0x2^0
  4096 + 2048 + 1024 + 512 + 0 + 128 + 0 + 32 + 16 + 0 + 4 + 2 + 0 = 
  hexadecimal: 0001 1110 1011 0110 = 1EB6
  */
  
int main() {
	char binario[] = "1111010110110";
	int i;
    int decimal = 0;
    int tamanho = strlen(binario);

    for (i = 0; i < tamanho; i++) {
        if (binario[i] == '1') { 
            decimal += pow(2, tamanho - 1 - i);
        }
    }
    
    printf("Binario: %s\n", binario);
    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %X\n", decimal); 
    
	return 0;
}
