/** 3) Desenvolva um programa para fazer o cálculo de conversão de valores de uma viagem ao exterior.
O programa deverá converter para a moeda o valor em real informado pelo viajante conforme país escolhido na tabela.

PAÍS                    VALOR MOEDA
Rússia                          1.68
USA                             3.27
Paquistão                   0.57
Egito                           1.25
Itália                            4.51
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char pais[30];

    float moeda, realBR;

    printf("Informe o país de destino: ");
    gets(pais);

    printf("Informe o valor em reais: R$");
    scanf("%f", &realBR);

    if(strcmp(pais, "Russia") == 0) {
        moeda = realBR / 1.68;
        printf("Uma viagem para %s custará: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "USA") == 0) {
        moeda = realBR / 3.27;
        printf("Uma viagem para %s custará: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Paquistao") == 0) {
        moeda = realBR / 0.57;
        printf("Uma viagem para %s custará: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Egito") == 0) {
        moeda = realBR / 1.25;
        printf("Uma viagem para %s custará: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Italia") == 0) {
        moeda = realBR / 4.51;
        printf("Uma viagem para %s custará: $%.2f. \n", pais, moeda);
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
