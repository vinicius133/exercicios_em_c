#include <stdio.h>

int main() {
    int n, binario = 0, potencia = 1;
    
    printf("Digite um número decimal: ");
    scanf("%d", &n);
    
    while (n > 0) {
        binario = binario + (n % 2) * potencia;
        n = n / 2;
        potencia = potencia * 10;
    }
    
    printf("Binário: %d\n", binario);
    
    return 0;
}