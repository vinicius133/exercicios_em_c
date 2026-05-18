#include <stdio.h>
#include <string.h>

int main(){

    char n1[30], n2[30];

    printf("Digite a primeira string: ");
    scanf(" %s", &n1);

    printf("Digite a segunda string: ");
    scanf(" %s", &n2);

    if (strcmp(n1, n2) < 0){
        printf("A ordem e: \n1. %s\n2.%s\n", n1, n2);
    } else if (strcmp(n1, n2) > 0){
        printf("A ordem e: \n1. %s\n2.%s\n", n2, n1);
    } else{
        printf("As strings sao iguais!\n");
    }

    return 0;
}