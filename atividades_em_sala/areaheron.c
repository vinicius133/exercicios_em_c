#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c;
    double A, s;
    printf("Digite o valor do lado A, B e C do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    A = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("A área é: %lf", A);

    return 0;
}