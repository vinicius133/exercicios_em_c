#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    y = sqrt(x) + (x / 2) + pow(x, x);

    printf("O resultado é: %f", y);

    return 0;
}
