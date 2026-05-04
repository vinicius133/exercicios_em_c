#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int quantidade, contador;
    double valor, soma = 0, media;
    printf("Quantidade de valores: ");
    scanf("%d", &quantidade); // quantidade >= 1
    for (contador = 1; contador <= quantidade; contador++) {

        printf("Valor: ");
        scanf("%lf", &valor);
        soma += valor;

    }
    printf("Media: %f", soma / quantidade);

    return 0;
}