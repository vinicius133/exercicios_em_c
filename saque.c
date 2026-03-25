#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float valor_inicial;
    printf("Digite o valor inicial: ");
    scanf("%f", &valor_inicial);

    float taxa;
    printf("Digite a taxa de rendimento: ");
    scanf("%f", &taxa);

    float valor_meta;
    printf("Digite o valor que você tem como meta: ");
    scanf("%f", &valor_meta);

    int dias = 0;
    while (valor_inicial < valor_meta){
        valor_inicial = valor_inicial + (valor_inicial * taxa / 100);
        dias = dias + 1;
        printf("Dia %d: %.2f \n", dias, valor_inicial);
    }


    printf("Sua meta foi atingida em %d dias! Saldo final: R$ %.2f", dias, valor_inicial);

 
    

    return 0;
}