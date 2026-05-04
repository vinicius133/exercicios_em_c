#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int opcao = 0;
   
    while (opcao != 5) {
        printf("\nMENU\n");
        printf("1 - Rabanada\n");
        printf("2 - Strogonoff\n");
        printf("3 - Risoto\n");
        printf("4 - Escargot\n");
        printf("5 - Sair\n");

        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Você escolheu Rabanada!\n");
                break;
            case 2:
                printf("Você escolheu Strogonoff!\n");
                break;
            case 3:
                printf("Você escolheu Risoto!\n");
                break;
            case 4:
                printf("Você escolheu Escargot!\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }
    return 0;
}