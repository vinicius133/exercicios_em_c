#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int d1, m1, a1, d2, m2, a2;
    printf("Digite a primeira data separada por espaços (ex: 23 09 2007): ");
    scanf("%d %d %d", &d1, &m1, &a1);

    printf("Digite a segunda data separada por espaços (ex: 23 09 2007): ");
    scanf("%d %d %d", &d2, &m2, &a2);

    if (a1 > a2){
        printf("A primeira data é maior!\n");
    } else if (a1 < a2){
        printf("A segunda data é maior!\n");
    } else{
        if (m1 > m2) {
            printf("A primeira data é maior!\n");
        } else if (m1 < m2) {
            printf("A segunda data é maior!\n");
        } else {
            if (d1 > d2) {
                printf("A primeira data é maior!\n");
            } else if (d1 < d2) {
                printf("A segunda data é maior!\n");
            } else {
                printf("As datas são iguais!\n");
            }
        }
    }

    return 0;
}