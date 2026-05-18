#include <stdio.h>
#define linha 5
#define coluna 5

int main(){

    int m[linha][coluna], pares = 0;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o valor da posicao [%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);

            if (m[i][j] % 2 == 0){
                pares++;
            }

        }
    }
    printf("A quantidade de numeros pares e: %d", pares);

    return 0;
}