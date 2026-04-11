// Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações
// abaixo:
// - É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de
// contribuição. //////////////////////////////////////////////////////
// - É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de
// contribuição. //////////////////////////////////////////////////////
// - É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de
// contribuição.

// - É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de
// contribuição.

#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char sexo;
    int idade, cont;
    printf("Digite o seu sexo(m para masculino e f para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite quantos anos você tem de contribuição: ");
    scanf("%d", &cont);

    if (sexo == 'm'){
        if (idade >= 65 && cont >= 10 || idade >= 63 && cont >= 15){
            printf("Você pode se aposentar pelo INSS!\n");
        } else{
            printf("Você não pode se aposentar pelo INSS!\n");
        }
    } else if (sexo == 'f'){
        if (idade >= 63 && cont >= 10 || idade >= 61 && cont >= 15){
            printf("Você pode se aposentar pelo INSS!\n");
        } else{
            printf("Você não pode se aposentar pelo INSS!\n");
        }
    } else{
        printf("Digite m ou f!\n");
    }
    

    return 0;
}