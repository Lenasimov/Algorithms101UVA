/* 7) Fazer um programa para calcular o valor total da formula = ((n1 + n2) * 2) / 2.
Imprimir o valor total da fórmula. Atribua um valor qualquer para as variáveis n1 e n2. */

#include<stdio.h>
#include<stdlib.h>

main() {

    float n1=6, n2=12, formula;

    formula = ((n1 + n2) * 2) / 2;

    printf("Total da formula = %.2f \n", formula);

    system("pause");

}
