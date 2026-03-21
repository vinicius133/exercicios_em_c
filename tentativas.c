#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    srand(time(NULL));

    int dado = 0;
    int tentativas = 0;

    while (dado != 20) {
        dado = (rand() % 20) + 1;
        tentativas++; // Isso é o mesmo que tentativas = tentativas + 1
        printf("Tentativa %d: Rolou %d\n", tentativas, dado);
    }

    printf("Ufa! Levou %d vezes para tirar um 20.\n", tentativas);

    return 0;
}