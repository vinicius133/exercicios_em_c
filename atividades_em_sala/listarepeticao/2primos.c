#include <stdio.h>

int main() {
    int n, i, j, primo;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    i = n;
    while (1) {
        primo = 1;
        if (i < 2) primo = 0;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) { 
                primo = 0; 
                break; 
            }
        }
        if (primo) {
            printf("Menor primo >= %d: %d\n", n, i);
            break;
        }
        i++;
    }

    i = n;
    while (i >= 2) {
        primo = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) { 
                primo = 0; 
                break; 
            }
        }
        if (primo) {
            printf("Maior primo <= %d: %d\n", n, i);
            break;
        }
        i--;
    }
    
    return 0;
}