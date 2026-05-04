#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("MENU\n1 - Rabanada\n2 - Strogonnoff\n3 - Risoto\n4 - Scarggott\n5 - Sair");

    return 0;
}