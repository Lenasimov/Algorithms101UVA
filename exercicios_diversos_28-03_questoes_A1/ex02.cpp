/** 2) Desenvolver um programa para que o usu�rio informe os tr�s lados de um tri�ngulo
e imprima o tipo do tri�ngulo de acordo com as seguintes condi��es:

Se os tr�s lados forem diferentes, o tri�ngulo � escaleno,
Se os tr�s lados forem iguais, o tri�ngulo � equil�tero,
Se apenas dois lados forem iguais, o tri�ngulo � is�sceles.

N�o s�o aceitos valores zero e nem negativos.
Caso ocorra, exibir uma mensagem de erro e retornar para nova digita��o do valor errado. **/

#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float l1, l2, l3;

    inicioL1:
        printf("Informe o lado 1: ");
        scanf("%f", &l1);

        if(l1 <= 0) {
            printf("N�o s�o aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL1;
        }

    inicioL2:
        printf("Informe o lado 2: ");
        scanf("%f", &l2);

        if(l2 <= 0) {
            printf("N�o s�o aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL2;
        }

    inicioL3:
        printf("Informe o lado 3: ");
        scanf("%f", &l3);

        if(l3 <= 0) {
            printf("N�o s�o aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL3;
        }

     if( l1 != l2 && l1 != l3 && l2 != l3 ) {
        printf("Tri�ngulo escaleno! \n");

    } else if( l1 == l2 && l1 == l3 && l2 == l3 ) {
        printf("Tri�ngulo equil�tero! \n");

    }  else if( l1 == l2 || l1 == l3 || l2 == l3 ) {
        printf("Tri�ngulo is�sceles! \n");
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
