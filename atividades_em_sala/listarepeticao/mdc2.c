#include <stdio.h>

int main() {
    int m, n, resto;
    
    printf("Digite o valor de m e n (m >= n): ");
    scanf("%d %d", &m, &n);
    
    while (n != 0) {
        resto = m % n;
        m = n;
        n = resto;
    }
    
    printf("O MDC é: %d\n", m);
    
    return 0;
}