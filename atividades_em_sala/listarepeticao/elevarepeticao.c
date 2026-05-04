#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b, pot;
    printf("Digite a base a: ");
    scanf("%d", &a);

    printf("Digite o expoente b: ");
    scanf("%d", &b);

    while(b > 1){
        b = b - 1;

    }



    return 0;
}