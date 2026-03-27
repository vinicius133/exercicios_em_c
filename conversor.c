#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int escolha;
    int binario_entrada[4];
    printf("Qual conversão você quer fazer?\nDigite 1 para converter de decimal para binário\nDigite 2 para converter de binário para decimal\n");
    scanf("%d", &escolha);

    if(escolha == 1){

 
    } else if(escolha == 2){
        printf("Digite o número binário: ");
        scanf("%d", &binario_entrada);
        printf(binario_entrada);
    }
}