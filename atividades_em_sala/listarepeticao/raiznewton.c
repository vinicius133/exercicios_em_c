#include <stdio.h>

int main() {
    double y, x;
    
    printf("Digite um numero positivo: ");
    scanf("%lf", &y);
    
    x = y / 2.0;
    
    for (int i = 1; i < 20; i++) {
        x = x - ((x * x - y) / (2 * x));
    }
    
    printf("A vigesima aproximacao da raiz de %.2lf e: %lf\n", y, x);
    
    return 0;
}