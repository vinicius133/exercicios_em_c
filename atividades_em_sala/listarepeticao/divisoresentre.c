#include <stdio.h>

int main(){

    int n, divisor;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if (n % i == 0){
            printf("");
        }
        
    }

    return 0;
}