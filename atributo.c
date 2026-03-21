#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int forca;
    printf("Digite a força do seu personagem: ");
    scanf("%d", &forca);

    int dificuldade;
    printf("Digite a dificuldade do teste: ");
    scanf("%d", &dificuldade);

    if(forca >= 2*dificuldade){
        printf("Sucesso Crítico!");
    } else if(forca >= dificuldade){
        printf("Sucesso!");
    } else{
        printf("Falha! :(");
    }
    return 0;
}