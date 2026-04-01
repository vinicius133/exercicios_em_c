#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b, c, temp;
    printf("Digite os 3 números para ordenar: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);

    if (a > b){
        a = temp;
        a = b;
        b = temp;
    } else if(a > c){
        a = temp;
        a = c;
        c = temp;
    } else if(b > c){
        b = temp;
        b = c;
        c = temp;
    }
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);

    return 0;
}
