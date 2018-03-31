/** 6) Fazer um programa para que o usuário digite três números
e o programa verifique se os números podem ser os lados de um triângulo. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int l1, l2, l3;

    printf("Digite (separadamente) três números: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if( (l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2))) {
        printf("%d, %d e %d formam um triângulo.\n", l1, l2, l3);

    } else {
        printf("%d, %d e %d não formam um triângulo.\n", l1, l2, l3);
    }

    system("pause");
}
