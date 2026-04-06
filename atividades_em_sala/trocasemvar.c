#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Os valores trocados são x: %d e y: %d", x, y);

    return 0;
}