#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float x, y; //usei float por que coordenadas podem ter decimais e a questão não especificou
    printf("Digite a coordenada no formato (x; y): ");
    scanf("(%f; %f)", &x, &y); 
    
    if (x == 0 && y == 0){
        printf("A coordenada está na origem!\n");
    } else if (x == 0) {
        printf("A coordenada está sobre o Eixo Y!\n");
    } else if (y == 0) {
        printf("A coordenada está sobre o Eixo X!\n");
    }else if (x > 0 && y > 0){
        printf("A coordenada está no primeiro quadrante!\n");
    } else if (x > 0 && y < 0){
        printf("A coordenada está no quarto quadrante!\n");
    } else if (x < 0 && y > 0){
        printf("A coordenada está no segundo quadrante!\n");
    } else{
        printf("A coordenada está no terceiro quadrante!\n");
    }
    

    return 0;
}