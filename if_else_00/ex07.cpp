/** 7) Solicitar ao usuário o salário e a prestação.
Se a prestação for maior que 20% do salário, imprimir:
"Empréstimo não pode ser concedido."
Senão, imprimir "Empréstimo pode ser concedido."

Fórmula:
porcent = salbruto * 0.20;

**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    float sal, prest, porcent;

    printf("Informe seu salário: $ ");
    scanf("%f", &sal);
    printf("Informe o valor da prestação: $ ");
    scanf("%f", &prest);

    porcent = sal * 0.20;

    if(prest >= porcent) {
        printf("Empréstimo não pode ser concedido!\n");

    } else {
        printf("Empréstimo concedido!\n");
    }

    system("pause");
}
