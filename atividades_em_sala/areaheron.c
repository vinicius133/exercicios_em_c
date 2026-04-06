#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c;
    double A;
    printf("Digite o valor do lado A, B e C do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);



    return 0;
}