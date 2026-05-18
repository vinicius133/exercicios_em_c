#include <stdio.h>
#define linha 4
#define coluna 4

int main(){

    int m[linha][coluna], pares;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o valor da posicao [%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);

            if (m[i][j] % 2 == 0){
                ;
            }
        }
    }
        
            

    return 0;
}