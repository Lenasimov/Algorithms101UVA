/** 7) Solicitar ao usu�rio o sal�rio e a presta��o.
Se a presta��o for maior que 20% do sal�rio, imprimir:
"Empr�stimo n�o pode ser concedido."
Sen�o, imprimir "Empr�stimo pode ser concedido."

F�rmula:
porcent = salbruto * 0.20;

**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    float sal, prest, porcent;

    printf("Informe seu sal�rio: $ ");
    scanf("%f", &sal);
    printf("Informe o valor da presta��o: $ ");
    scanf("%f", &prest);

    porcent = sal * 0.20;

    if(prest >= porcent) {
        printf("Empr�stimo n�o pode ser concedido!\n");

    } else {
        printf("Empr�stimo concedido!\n");
    }

    system("pause");
}
