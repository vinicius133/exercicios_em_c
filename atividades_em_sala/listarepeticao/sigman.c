#include <stdio.h>

int main(){

    int n, soma = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma = soma + i; 
    }
    printf("O resultado da soma é: %d\n", soma);

    return 0;
}