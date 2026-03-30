#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int idade;
        printf("Digite sua idade: ");
    scanf("%d", &idade);
    if ( (idade >= 0) && (idade < 18) ) {

    printf("Não possui habilitação.\n");
    } else if ( (idade >= 18) && (idade < 65) ) {

    printf("Renove exames a cada 5 anos.\n");

    } else{

    printf("Renove exames a cada 3 anos.\n");

    }
    return 0;

}