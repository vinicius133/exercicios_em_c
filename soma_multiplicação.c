#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int fator_numerico, fator_multiplicacao; 
    printf("Digite o primeiro fator da multiplicação: ");
    scanf("%d", fator_multiplicacao);

    return 0;
}