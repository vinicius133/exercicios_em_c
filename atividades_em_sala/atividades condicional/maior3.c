#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c;
    printf("Digite os 3 números: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("O maior é: %.2f\n", a);
    } else if (b >= c) {
        printf("O maior é: %.2f\n", b);
    } else {
        printf("O maior é: %.2f\n", c);
    }

    return 0;
} //Usei float porque a questão não especificou se eram números inteiros ou não então deixei decimais para ser mais abrangente
