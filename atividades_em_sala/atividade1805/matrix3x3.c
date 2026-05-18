#include <stdio.h>
#define linha 3
#define coluna 3

int main(){

    float m[linha][coluna], soma = 0;

    printf("---Digite os valores da matriz a seguir---\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &m[i][j]);
             soma = soma + m[i][j];
        }
    }

    printf("\nA soma e: %.2f \n", soma);


    return 0;
}