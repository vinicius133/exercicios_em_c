#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("Os valores desse laço de repetição são: ");
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

}

