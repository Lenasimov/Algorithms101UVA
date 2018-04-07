/** 6) Fazer um programa para que o usuário opte por uma opção de conversão "1 – Celsius, 2 – Farenheit".
Após a escolha, o usuário deverá informar a temperatura.
Criar uma nova função para aplicar a conversão conforme opção escolhida.

Fórmulas:
C = 5 * (F - 32) / 9
F = (9 * C / 5) + 32

**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float converteTemp(int op, float temp) {

    float tempResult = 0;

    if(op == 1) {

        return tempResult = (9 * temp / 5) + 32;

    } else if(op == 2) {

        return tempResult = 5 * (temp - 32) / 9;

    } else {
        printf("Opção inválida! \n");
        return -1;
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float temp, tempResult;
    int op;

    printf("Escolha uma opção de conversão: \n1 - Celscius \t 2 - Fahrenheit \n");
    fflush(stdin);
    scanf("%d", &op);

    printf("Informe a temperatura: ");
    fflush(stdin);
    scanf("%f", &temp);

    tempResult  = converteTemp(op, temp);

    printf("Você escolheu a opção %d. \nTemperatura convertida: %.2f \n", op, tempResult);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
