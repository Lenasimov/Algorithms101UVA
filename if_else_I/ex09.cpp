/** 9) Fazer um programa para que o usuário digite um salário,
e o programa deverá calcular seu reajuste.
Exibir mensagem com o valor do desconto.

Salario <= 600 && sexo == 'M', aplicar desconto de 20%
Salario <= 1200 && sexo == 'F', aplicar desconto de 20%
Salario <= 2000 && sexo == 'M', aplicar desconto de 25%
Senão, desconto de 30% para ambos os sexos  **/

#include<stdio.h>
#include<stdlib.h>
#include<locale>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    float sal, desconto, reajuste;
    char sexo;

    printf("Informe seu sálario: $");
    scanf("%f", &sal);

    printf("Informe seu sexo (F | M): ");
    fflush(stdin);
    scanf("%c", &sexo);

    if(sal <= 600 && sexo == 'M') {
        desconto = sal * 0.2;
        reajuste = sal - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        //printf("Caiu aqui 1 \n");

    } else if(sal <= 600 && sexo == 'F' ) {
        printf("Isento de reajuste!\n");
        //printf("Caiu aqui 2 \n");

    } else if(sal <= 1200 && sexo == 'F') {
        desconto = sal * 0.2;
        reajuste = sal - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        //printf("Caiu aqui 3 \n");

    } else if(sal <= 2000 && sexo == 'M') {
        desconto = sal * 0.25;
        reajuste = sal - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        //printf("Caiu aqui 4 \n");

    } else if(sal <= 2000 && sexo == 'F') {
        printf("Isento de reajuste! \n");
        //printf("Caiu aqui 5 \n");

    } else {
        desconto = sal * 0.3;
        reajuste = sal - desconto;
        printf("Novo salário: $%.2f \n", reajuste);
        //printf("Caiu aqui 6 \n");
    }

    system("pause");
}
