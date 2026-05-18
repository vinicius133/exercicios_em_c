#include <stdio.h>
#define linha 3
#define coluna 3

int main(){

    float m[linha][coluna], soma = 0, menor, maior;

    printf("---Digite os valores da matriz a seguir---\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){

            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &m[i][j]);

            soma = soma + m[i][j];


        }
    }
    menor = m[0][0];
    maior = m[0][0];
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if (menor > m[i][j]){
                        menor = m[i][j];
                    }
                    if (maior < m[i][j]){
                        maior = m[i][j];
                    }
        }
    }
    

    printf("\nA soma e: %.2f \nO maior e: %.2f\nO menor e: %.2f\nA media e: %.2f", soma, maior, menor, soma/9);


    return 0;
}