/** 9) Fazer um programa para que o usuário digite um salário,
e o programa deverá calcular seu reajuste.
Exibir mensagem com o valor do desconto.

Salario <= 600 e sexo = ‘M’, aplicar desconto de 20%
Salario <= 1200 e sexo = ‘F’, aplicar desconto de 20%
Salario <= 2000 e sexo ‘M’, aplicar desconto de 25%
Senão, desconto de 30% - ambos os sexos **/

#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    float salario, desconto, reajuste;
    char sexo;

    printf("Informe o salário: $ ");
    scanf("%f", &salario);

    printf("Informeu o sexo (F | M): ");
    fflush(stdin);
    scanf("%c", &sexo);

    if (salario <= 600 && sexo == 'M') {
        desconto = salario * 0.2;
        reajuste = salario - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        printf("Caiu aqui 1 \n");

    } else if(salario <= 600 && sexo == 'F') {
        printf("Isento reajuste! \n");
        printf("Caiu aqui 2! \n");

    } else if (salario <= 1200 && sexo == 'F') {
        desconto = salario * 0.2;
        printf("Novo salário: $%.2f \n", reajuste);
        printf("Caiu aqui 3\n");

    } else if (salario <= 2000 && sexo == 'M') {
        desconto = salario * 0.25;
        reajuste = salario - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        printf("Caiu aqui 4 \n");

    }  else if(salario <= 2000 && sexo == 'F') {
        printf("Isento de reajuste! \n");
        printf("Caiu aui 5\n");

    } else {
        desconto = salario * 0.30;
        reajuste = salario - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        printf("Caiu aqui 6 \n");
    }

    system("pause");
}
