#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;
    for (numero = 1; numero <= 10; numero++){
        printf("%d ", numero);
    }

    return 0;
}