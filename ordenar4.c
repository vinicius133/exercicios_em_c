#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int a, b, c, d, temp;
    printf("Digite os números que serão ordenados: ");
    scanf("%d %d %d %d", a, b, c, d);

    if (a > b){
        temp = a;
        a = b;
        b = temp;
    } 
    if (a > c){
        temp = a;
        a = c;
        c = temp;
    }  

    return 0;
}

//não terminado