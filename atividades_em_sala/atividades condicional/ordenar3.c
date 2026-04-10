#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a, b, c, temp;
    printf("Digite os 3 números para ordenar: ");
    scanf("%f %f %f", &a, &b, &c);

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
    printf("A ordem ficou:\nA: %f\nB: %f\nC: %f\n", a, b, c);

    return 0;
} //Usei float porque a questão não especificou se eram números inteiros ou não então deixei decimais para ser mais abrangente
