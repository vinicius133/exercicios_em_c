#include <stdio.h>

int main(){

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Os divisores entre 2 e %d sao: ", n);
    for(int i = 2; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}