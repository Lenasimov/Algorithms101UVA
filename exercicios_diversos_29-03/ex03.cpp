/** 3) Desenvolva um programa para fazer o c�lculo de convers�o de valores de uma viagem ao exterior.
O programa dever� converter para a moeda o valor em real informado pelo viajante conforme pa�s escolhido na tabela.

PA�S                    VALOR MOEDA
R�ssia                          1.68
USA                             3.27
Paquist�o                   0.57
Egito                           1.25
It�lia                            4.51
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

    printf("Informe o pa�s de destino: ");
    gets(pais);

    printf("Informe o valor em reais: R$");
    scanf("%f", &realBR);

    if(strcmp(pais, "Russia") == 0) {
        moeda = realBR / 1.68;
        printf("Uma viagem para %s custar�: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "USA") == 0) {
        moeda = realBR / 3.27;
        printf("Uma viagem para %s custar�: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Paquistao") == 0) {
        moeda = realBR / 0.57;
        printf("Uma viagem para %s custar�: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Egito") == 0) {
        moeda = realBR / 1.25;
        printf("Uma viagem para %s custar�: $%.2f. \n", pais, moeda);

    } else if(strcmp(pais, "Italia") == 0) {
        moeda = realBR / 4.51;
        printf("Uma viagem para %s custar�: $%.2f. \n", pais, moeda);
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
