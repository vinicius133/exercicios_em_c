#include <stdio.h>

int main(){

    int m[3][3], mt[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        
            printf("\nDigite o valor da posicao [%d][%d]: \n", i, j);
            scanf("%d", &m[i][j]);

        }
    }
    
    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
        
            printf("%d ", m[j][i]);
            

        }
    }

    return 0;
}