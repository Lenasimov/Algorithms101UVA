/** 6) Fazer um programa para que o usu�rio digite tr�s n�meros
e o programa verifique se os n�meros podem ser os lados de um tri�ngulo. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int l1, l2, l3;

    printf("Digite (separadamente) tr�s n�meros: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if( (l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
        printf("%d, %d e %d formam um tri�ngulo.\n", l1, l2, l3);

    } else {
        printf("%d, %d e %d n�o formam um tri�ngulo.\n", l1, l2, l3);
    }

    system("pause");
}
