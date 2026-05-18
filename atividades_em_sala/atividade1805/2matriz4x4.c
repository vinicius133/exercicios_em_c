#include <stdio.h>
#define linha 4
#define coluna 4

int main(){

    int m[linha][coluna], pares_index = 0, pares[pares_index];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor da posicao [%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);

            if (m[i][j] % 2 == 0){
                pares[pares_index] = m[i][j];
                pares_index++;
            }
        }
    }
    
    printf("o vetor de numeros pares e: ");
    for(int i = 0; i < pares_index; i++){
        printf("%d ", pares[i] );
    }


    return 0;
}