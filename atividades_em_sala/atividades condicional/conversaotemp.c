#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char escolha;
    float f, c;
    printf("Para a conversão de Fahrenheit para Celsius digite 'F'\nPara a conversão de Celsius para Fahrenheit digite 'C'\n");
    printf("Digite a sua opção: ");
    scanf("%c", &escolha);

    if (escolha == 'F'){
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f", &f);

        c = 5.0 / 9.0 * (f - 32);

        printf("%.1f Fahrenheit equivale a %.1f Celsius", f, c);
    } else if (escolha == 'C'){
        printf("Digite o valor em Celsius: ");
        scanf("%f", &c);

        f = (c * 9.0 / 5.0) + 32;
        
        printf("%.1f Celsius equivale a %.1f Fahrenheit", c, f);
    }
    

    return 0;
}