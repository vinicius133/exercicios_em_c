#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    srand(time(NULL));

    int dt;
    printf("Digite a Dificuldade(DT) do teste: ");
    scanf("%d", &dt);

    int dado = (rand() % 20) + 1;

    printf("Você rolou um %d!\n", dado);

    if (dado == 20){
        printf("Sucesso Crítico!");
    } else if (dado == 1){
        printf("Desastre! Falha crítica!");
    } else if (dado >= dt){
        printf("Sucesso!");
    } else{
        printf("Desastre!");
    }
    
    return 0;
}
