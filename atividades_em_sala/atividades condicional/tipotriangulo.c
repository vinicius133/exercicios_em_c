#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c;
    printf("Digite os lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c){
        printf("Este é um triângulo equiátero!\n");
    } else if (a == b || a == c || b == c){
        printf("Este é um triângulo isósceles!\n");
    } else{
        printf("Este é um triângulo escaleno!\n");
    }

    return 0;
}