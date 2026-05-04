#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b, resultado = 1;
    printf("Digite a base a: ");
    scanf("%d", &a);

    printf("Digite o expoente b: ");
    scanf("%d", &b);

    for(int i = 0; i < b; i++){
        resultado = resultado * a;
    }

    printf("Resultado: %d\n", resultado);


    return 0;
}