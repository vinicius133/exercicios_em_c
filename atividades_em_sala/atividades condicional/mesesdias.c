#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int d, m, total = 0, erro = 0;
    printf("Digite o dia e o mês: ");
    scanf("%d %d", &d, &m);

    if (m < 1 || m > 12 || d < 1){
        erro = 1;
    } else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31){ 
        erro = 1;
    } else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30){ 
        erro = 1;
    } else if (m == 2 && d > 28){ 
        erro = 1;
    }

    if (erro == 1){
        printf("Data inválida!\n");
        return 0; 
    }

    if (m > 1){ 
        total += 31;
    } 
    if (m > 2){ 
        total += 28; 
    } 
    if (m > 3){ 
        total += 31;
    }  
    if (m > 4){ 
        total += 30; 
    } 
    if (m > 5){ 
        total += 31;
    } 
    if (m > 6){ 
        total += 30; 
    } 
    if (m > 7){ 
        total += 31;
    } 
    if (m > 8){ 
        total += 31; 
    } 
    if (m > 9){ 
        total += 30;
    } 
    if (m > 10){ 
        total += 31; 
    } 
    if (m > 11){ 
        total += 30;
    }

    total += (d - 1); 

    printf("Dias entre 01/01 e a data: %d\n", total);

    return 0;
}