#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int x; 
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    if ( ((x % 2 == 0) && (x > 10)) || ((x % 2 != 0) && (x < 50)) ){
        printf("SIM");
    } else{
        printf("NÃO");
    }

    return 0; 
}