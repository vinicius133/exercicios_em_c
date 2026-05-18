#include <stdio.h>

int main() {

    int n, soma = 0;

    printf("Digite o numero n: ");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++) {
        soma = soma + j;
        printf("%d\n", soma);
    }

    return 0;
} 