#include <stdio.h>

int main() {
    int n, atual = 1;
    
    printf("Digite n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (atual <= n) {
                printf("%d ", atual);
                atual++;
            }
        }
        printf("\n");
        if (atual > n) break;
    }
    
    return 0;
}