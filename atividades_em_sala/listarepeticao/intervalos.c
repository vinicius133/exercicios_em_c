#include <stdio.h>

int main() {
    int n, i;
    int int1 = 0, int2 = 0, int3 = 0, int4 = 0;
    float num;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%f", &num);
        
        if (num >= 0 && num <= 25) int1++;
        else if (num >= 26 && num <= 50) int2++;
        else if (num >= 51 && num <= 75) int3++;
        else if (num >= 76 && num <= 100) int4++;
    }
    
    printf("Intervalo [0..25]: %d\n", int1);
    printf("Intervalo [26..50]: %d\n", int2);
    printf("Intervalo [51..75]: %d\n", int3);
    printf("Intervalo [76..100]: %d\n", int4);
    
    return 0;
}