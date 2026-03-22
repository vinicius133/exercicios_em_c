#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int m[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {-7, 9, -15}
    };

    printf("Impressão da matriz: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    int soma = 0;
    printf("Soma de todos os elementos: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            soma += m[i][j];
        }
    }
    printf("%d \n", soma);


    int maior = m[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(m[i][j] > maior){
                maior = m[i][j];
            }
        }
    }

    printf("Maior valor:\n%d ", maior);

    return 0;
}