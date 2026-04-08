#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float pi = 3.141592;
    float raio, area, perimetro;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);
    perimetro = 2 * pi * raio;
    printf("Area: %.2f \n", area);
    printf("Perimetro: %.2f \n", perimetro);

    return 0;
}