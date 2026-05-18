#include <stdio.h>

int main() {
    int n, atual, anterior, ordenado = 1;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("Digite o 1o numero: ");
        scanf("%d", &anterior);
        
        for (int i = 2; i <= n; i++) {
            printf("Digite o %do numero: ", i);
            scanf("%d", &atual);
            
            if (atual < anterior) {
                ordenado = 0;
            }
            anterior = atual;
        }
        
        if (ordenado == 1) {
            printf("A sequencia esta ordenada.\n");
        } else {
            printf("A sequencia NAO esta ordenada.\n");
        }
    }
    
    return 0;
}