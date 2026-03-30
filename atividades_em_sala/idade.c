#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("Já pode ter habilitação!\n");
    } else{
        printf("Não pode ter habilitação!\n");
    }

    return 0;
}
