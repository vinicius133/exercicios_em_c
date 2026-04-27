#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero, divisor, resto;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    divisor = 1;
    while (divisor <= numero) {

        resto = numero % divisor;
        if (resto == 0) {

        printf("Divisor: %d \n", divisor);

        }
        divisor = divisor + 1;

    }

    return 0;
}