#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numeroA, numeroB, resto;
    printf("Digite dois números (ordem crescente): ");
    scanf("%d %d", &numeroA, &numeroB);
    while (numeroA > 0) {

    resto = numeroB % numeroA;
    numeroB = numeroA;
    numeroA = resto;

    }
    printf("MDC: %d", numeroB);

    return 0;
}