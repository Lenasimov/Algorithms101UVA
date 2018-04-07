/** 6) Fazer um programa para que o usu�rio opte por uma op��o de convers�o "1 � Celsius, 2 � Farenheit".
Ap�s a escolha, o usu�rio dever� informar a temperatura.
Criar uma nova fun��o para aplicar a convers�o conforme op��o escolhida.

F�rmulas:
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
        printf("Op��o inv�lida! \n");
        return -1;
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float temp, tempResult;
    int op;

    printf("Escolha uma op��o de convers�o: \n1 - Celscius \t 2 - Fahrenheit \n");
    fflush(stdin);
    scanf("%d", &op);

    printf("Informe a temperatura: ");
    fflush(stdin);
    scanf("%f", &temp);

    tempResult  = converteTemp(op, temp);

    printf("Voc� escolheu a op��o %d. \nTemperatura convertida: %.2f \n", op, tempResult);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
