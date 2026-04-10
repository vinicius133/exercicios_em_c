#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0){
        printf("O ano %d é bissexto!\n", ano);
    } else if (ano % 4 == 0 && ano % 100 != 0){
        printf("O ano %d é bissexto!\n", ano);
    } else{
        printf("O ano %d não é bissexto!\n", ano);
    }

    return 0;
}