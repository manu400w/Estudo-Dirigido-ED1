#include <stdio.h>
#include <math.h>
#include <string.h>

  /* b) 1000101101 de binario para decimal e para hexadecimal.
  decimal: 1x2^9 + 0x2^8 + 0x2^7 + 0x2^6 + 1x2^5 + 0x2^4 + 1x2^3 + 1x2^2 + 0x2^1 + 1x2^0
  512 + 0 + 0 + 0 + 32 + 0 + 8 + 4 + 0 + 1 = 557 
  hexadecimal: 0010 0010 1101= 225
  */
  
int main() {
	char binario[] = "1000101101";
	int i;
    int decimal = 0;
    int tamanho = strlen(binario);

    for (i = 0; i < tamanho; i++) {
        if (binario[i] == '1') { //expoente invertido
            decimal += pow(2, tamanho - 1 - i);
        }
    }
    
    printf("Binario: %s\n", binario);
    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %X\n", decimal); 
    
	return 0;
}
