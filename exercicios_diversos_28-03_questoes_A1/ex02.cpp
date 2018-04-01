/** 2) Desenvolver um programa para que o usuário informe os três lados de um triângulo
e imprima o tipo do triângulo de acordo com as seguintes condições:

Se os três lados forem diferentes, o triângulo é escaleno,
Se os três lados forem iguais, o triângulo é equilátero,
Se apenas dois lados forem iguais, o triângulo é isósceles.

Não são aceitos valores zero e nem negativos.
Caso ocorra, exibir uma mensagem de erro e retornar para nova digitação do valor errado. **/

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
            printf("Não são aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL1;
        }

    inicioL2:
        printf("Informe o lado 2: ");
        scanf("%f", &l2);

        if(l2 <= 0) {
            printf("Não são aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL2;
        }

    inicioL3:
        printf("Informe o lado 3: ");
        scanf("%f", &l3);

        if(l3 <= 0) {
            printf("Não são aceitos valores negativos nem 0 (zero). Por favor, tente novamente! \n");
            goto inicioL3;
        }

     if( l1 != l2 && l1 != l3 && l2 != l3 ) {
        printf("Triângulo escaleno! \n");

    } else if( l1 == l2 && l1 == l3 && l2 == l3 ) {
        printf("Triângulo equilátero! \n");

    }  else if( l1 == l2 || l1 == l3 || l2 == l3 ) {
        printf("Triângulo isósceles! \n");
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
