#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade, diferenca;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        diferenca = idade - 18;
        printf("Já tem habilitação há %d anos!\n", diferenca);
    } else{
        diferenca = 18 - idade;
        printf("Espere mais %d anos\n", diferenca);
    }

    return 0;
}
