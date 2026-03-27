#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    srand(time(NULL));

    int historico[5];

    int jogador = 100;
    int monstro = 80;

    int escolha;
    while (jogador > 0 && monstro > 0){
        printf("Qual sua ação?\n 1-Atacar\n 2-Curar\n");
        scanf("%d", &escolha);

        if (escolha == 1){
            monstro = monstro - (rand() % 11 + 10);
        } else if (escolha == 2){
            jogador = jogador + (rand() % 11 + 5);
        }

        jogador = jogador - (rand() % 13 + 6);


    }
    
    if (jogador > monstro){
        printf("O Jogador Venceu! Jogador: %d\n Monstro %d\n", jogador, monstro);
    } else{
        printf("O Monstro VenceuJogador: %d\n Monstro %d\n", jogador, monstro);
    }

    return 0;
}