#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    printf("Digite os números que serão ordenados");
    scanf("");

    for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
        if (vetor[i] > vetor[j]) { 
            temp = vetor[i];       
            vetor[i] = vetor[j];
            vetor[j] = temp;


    return 0;
}

//não terminado