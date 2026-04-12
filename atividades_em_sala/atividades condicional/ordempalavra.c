#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char p1l1, p1l2, p1l3, p2l1, p2l2, p2l3, p3l1, p3l2, p3l3, t1, t2, t3;

    printf("Digite a primeira palavra de 3 letras: ");
    scanf(" %c%c%c", &p1l1, &p1l2, &p1l3);

    printf("Digite a segunda palavra de 3 letras: ");
    scanf(" %c%c%c", &p2l1, &p2l2, &p2l3);

    printf("Digite a terceira palavra de 3 letras: ");
    scanf(" %c%c%c", &p3l1, &p3l2, &p3l3);

    
    if (p1l1 > p2l1 || (p1l1 == p2l1 && p1l2 > p2l2) || (p1l1 == p2l1 && p1l2 == p2l2 && p1l3 > p2l3)) {
        t1 = p1l1; t2 = p1l2; t3 = p1l3;
        p1l1 = p2l1; p1l2 = p2l2; p1l3 = p2l3;
        p2l1 = t1; p2l2 = t2; p2l3 = t3;
    }

    if (p1l1 > p3l1 || (p1l1 == p3l1 && p1l2 > p3l2) || (p1l1 == p3l1 && p1l2 == p3l2 && p1l3 > p3l3)) {
        t1 = p1l1; t2 = p1l2; t3 = p1l3;
        p1l1 = p3l1; p1l2 = p3l2; p1l3 = p3l3;
        p3l1 = t1; p3l2 = t2; p3l3 = t3;
    }

    if (p2l1 > p3l1 || (p2l1 == p3l1 && p2l2 > p3l2) || (p2l1 == p3l1 && p2l2 == p3l2 && p2l3 > p3l3)) {
        t1 = p2l1; t2 = p2l2; t3 = p2l3;
        p2l1 = p3l1; p2l2 = p3l2; p2l3 = p3l3;
        p3l1 = t1; p3l2 = t2; p3l3 = t3;
    }

    printf("\nOrdem lexicográfica:\n");
    printf("%c%c%c\n", p1l1, p1l2, p1l3);
    printf("%c%c%c\n", p2l1, p2l2, p2l3);
    printf("%c%c%c\n", p3l1, p3l2, p3l3);

    return 0;
}