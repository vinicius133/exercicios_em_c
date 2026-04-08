#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int x; 
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    

    return 0; 
}