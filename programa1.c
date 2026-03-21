#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int cpf;
    printf("Digite o primeiro dígito do seu CPF: \n");
    scanf("%d", &cpf);

    float passagem;
    printf("Digite o valor da passagem de ônibus: \n");
    scanf("%f", &passagem);

    char inicial;
    printf("Digite a inicial do seu nome: \n");
    scanf(" %c", &inicial);

    printf("Seu usuário é: %d%.2f%c", cpf, passagem, inicial);

    return 0;
}