#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero = 1;
    do {

    printf("%d ", numero);
    numero = numero + 1;

    } while (numero <= 10);

    return 0;
}