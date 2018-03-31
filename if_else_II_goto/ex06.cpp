/**
6) Fazer um programa para que o usuário digite três números e o programa verifique se os números são diferentes.
O programa não pode permitir que os valores digitados sejam iguais. Caso aconteça, mensagem de erro e retornar
para nova digitação. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    inicio:
        printf("Digite três números: ");
        fflush(stdin);
        scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3) && (n2 == n3)) {
        printf("Os números não podem ser iguais! \n");
        goto inicio;

    } else if((n1 == n2) || (n1 == n3) || (n2 == n3)) {
        printf("Apenas dois números são iguais! \n");

    } else {
        printf("Todos os números são diferentes! \n");
    }

    printf("Fim do programa! \n");

    system("pause");
}
