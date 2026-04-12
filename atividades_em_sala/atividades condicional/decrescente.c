#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b, c, d, temp;
    printf("Digite quatro números inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b) { 
        temp = a; 
        a = b; 
        b = temp; 
    }
    if (a < c) { 
        temp = a; 
        a = c; 
        c = temp; 
    }
    if (a < d) { 
        temp = a; 
        a = d; 
        d = temp; 
    }

    if (b < c) { 
        temp = b;
        b = c; 
        c = temp; 
    }
    if (b < d) { 
        temp = b; 
        b = d; 
        d = temp; 
    }

    if (c < d) { 
        temp = c; 
        c = d; 
        d = temp; 
    }

    printf("Ordem não crescente: %d %d %d %d\n", a, b, c, d);

    return 0;
}