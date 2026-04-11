#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
    float maior, segundo;
    printf("Digite os 10 números: ");
    scanf("%f %f %f %f %f %f %f %f %f %f", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);

    maior = -999999.0;
    segundo = -999999.0;

    
    if (a0 > maior){ 
        segundo = maior; 
        maior = a0; 
    }
    else if (a0 > segundo){ 
        segundo = a0; 
    }


    if (a1 > maior){ 
        segundo = maior; 
        maior = a1; 
    }
    else if (a1 > segundo){ 
        segundo = a1; 
    }


    if (a2 > maior){ 
        segundo = maior; 
        maior = a2; 
    }
    else if (a2 > segundo){ 
        segundo = a2; 
    }


    if (a3 > maior){ 
        segundo = maior;
         maior = a3; 
        }
else if (a3 > segundo){ 
    segundo = a3; 
}

    if (a4 > maior) { 
        segundo = maior; 
        maior = a4; }
    else if (a4 > segundo) { 
        segundo = a4; 
    }

 
    if (a5 > maior) { 
        segundo = maior; 
        maior = a5; }
    else if (a5 > segundo) { 
        segundo = a5; 
    }


    if (a6 > maior) { 
        segundo = maior; 
        maior = a6; 
    }
    else if (a6 > segundo) { 
        segundo = a6; 
    }


    if (a7 > maior) { 
        segundo = maior; 
        maior = a7; }
    else if (a7 > segundo) { 
        segundo = a7; 
    }


    if (a8 > maior) { 
        segundo = maior; 
        maior = a8; }
    else if (a8 > segundo) { 
        segundo = a8; 
    }

 
    if (a9 > maior) { 
        segundo = maior;
        maior = a9; 
    }
    else if (a9 > segundo) { 
        segundo = a9; 
    }

    printf("\nO maior número é: %.2f", maior);
    printf("\nO segundo maior é: %.2f\n", segundo);

    return 0;
}