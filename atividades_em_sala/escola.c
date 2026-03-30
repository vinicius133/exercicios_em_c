#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    float media;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua media nos exames: ");
    scanf("%f", &media);
    if ( (idade >= 18) && (media >= 5.0) ) {

    printf("Voce esta aprovado!\n");

    } else {

    printf("Ainda nao aprovado!\n");
    }

    return 0;
}