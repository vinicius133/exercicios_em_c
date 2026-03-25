#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float notas[3];

    printf("Digite a primeira nota: ");
    scanf("%f", &notas[0]);

    printf("Digite a segunda nota: ");
    scanf("%f", &notas[1]);

    printf("Digite a terceira nota: ");
    scanf("%f", &notas[2]);

    float media = (notas[0] + notas[1] + notas[2]) / 3;
    printf("A média das 3 notas guardadas no vetor é: %.1f \n", media);

    return 0;
}