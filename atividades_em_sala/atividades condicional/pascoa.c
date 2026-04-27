#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int ano, a, b, c, d, e, f, g, h, i, k, l, m, mes, dia;

    printf("Digite o ano para saber a data da páscoa: ");
    scanf("%d", &ano);
    
    a = ano % 19;
    b = ano / 100;
    c = ano % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19 * a + b - d - g + 15) % 30;
    i = c / 4;
    k = c % 4;
    l = (32 + 2 * e + 2 * i - h - k) % 7;
    m = (a + 11 * h + 22 * l) / 451;
    
    mes = (h + l - 7 * m + 114) / 31;
    dia = ((h + l - 7 * m + 114) % 31) + 1;

    printf("No ano %d, a Páscoa cairá no dia %d/%d.\n", ano, dia, mes);

    return 0;
}