#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    int minutos = segundos / 60;
    
    int segundos_finais = segundos % 60;

    printf("%d:%d", minutos, segundos_finais);

    return 0;
}