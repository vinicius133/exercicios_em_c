#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int inventario[5];

    for (int i = 0; i < 5; i ++){
        printf("Digite o ID do item %d: ", i + 1);
        scanf("%d", &inventario[i]);
    }

    printf("O inventário completo é:\n");
    for (int i = 0; i < 5; i ++){
        printf("Item: %d ID: %d\n", i + 1, inventario[i]);
    }

    return 0;
}