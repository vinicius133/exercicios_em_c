#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero, divisor, resto;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    for (divisor = 1; divisor <= numero; divisor++) {

    resto = numero % divisor;
        if (resto == 0) {
        printf("Divisor: %d \n", divisor);
        }
    }
    return 0;
}