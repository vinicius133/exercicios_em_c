#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int vetores[5] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++){
        printf("Os valores do vetor são: %d ", vetores[i]);
    }

    int sum = vetores[0] + vetores[1] + vetores[2] + vetores[3] + vetores[4];
    printf("A soma dos vetores é: %d", sum);

    return 0;
}
