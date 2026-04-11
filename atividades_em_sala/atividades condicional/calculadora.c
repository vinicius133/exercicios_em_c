#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char operacao;
    float num1, num2, resultado;
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+'){
        resultado = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '-'){
        resultado = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '*'){
        resultado = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
    } 
    else if (operacao == '/'){
        // Verificação de segurança: não existe divisão por zero!
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida!\n");
        }
    } 
    else {
        printf("Operação inválida! Use apenas +, -, * ou /.\n");
    }

    return 0;
}