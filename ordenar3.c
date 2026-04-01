#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b, c, temp;
    printf("Digite os 3 números para ordenar: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b){
        temp = a;
        a = b;
        b = temp;
    } 
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    } 
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);

    return 0;
}
