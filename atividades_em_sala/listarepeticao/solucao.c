#include <stdio.h>

int main() {
    int c, x1, x2, x3, x4;
    
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    
    for (x1 = 0; x1 <= c; x1++) {
        for (x2 = 0; x2 <= c - x1; x2++) {
            for (x3 = 0; x3 <= c - x1 - x2; x3++) {
                x4 = c - x1 - x2 - x3;
                printf("%d + %d + %d + %d = %d\n", x1, x2, x3, x4, c);
            }
        }
    }
    
    return 0;
}