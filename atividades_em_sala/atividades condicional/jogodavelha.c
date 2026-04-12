#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int ganhouO = 0, ganhouX = 0;

    printf("Digite os 9 números do tabuleiro (0 para O, 2 para X, 1 para vazio):\n");
    scanf("%d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);

    if (a1 == 0 && a2 == 0 && a3 == 0 || a4 == 0 && a5 == 0 && a6 == 0 || a7 == 0 && a8 == 0 && a9 == 0 || 
        a1 == 0 && a4 == 0 && a7 == 0 || a2 == 0 && a5 == 0 && a8 == 0 || a3 == 0 && a6 == 0 && a9 == 0 || 
        a1 == 0 && a5 == 0 && a9 == 0 || a3 == 0 && a5 == 0 && a7 == 0){                    
        printf("O\n");
    } else if (a1 == 2 && a2 == 2 && a3 == 2 || a4 == 2 && a5 == 2 && a6 == 2 || a7 == 2 && a8 == 2 && a9 == 2 || 
        a1 == 2 && a4 == 2 && a7 == 2 || a2 == 2 && a5 == 2 && a8 == 2 || a3 == 2 && a6 == 2 && a9 == 2 || 
        a1 == 2 && a5 == 2 && a9 == 2 || a3 == 2 && a5 == 2 && a7 == 2){                    
        printf("X\n");
    } else if(a1 == 1 || a2 == 1 || a3 == 1 || a4 == 1 || a5 == 1 || a6 == 1 || a7 == 1 || a8 == 1 || a9 == 1){
        printf("Indefinido\n");
    } else{
        printf("Velha\n");
    }

    return 0;
}