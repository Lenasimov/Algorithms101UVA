/**
6) Fazer um programa para que o usu�rio digite tr�s n�meros e o programa verifique se os n�meros s�o diferentes.
O programa n�o pode permitir que os valores digitados sejam iguais. Caso aconte�a, mensagem de erro e retornar
para nova digita��o. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    inicio:
        printf("Digite tr�s n�meros: ");
        fflush(stdin);
        scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3) && (n2 == n3)) {
        printf("Os n�meros n�o podem ser iguais! \n");
        goto inicio;

    } else if((n1 == n2) || (n1 == n3) || (n2 == n3)) {
        printf("Apenas dois n�meros s�o iguais! \n");

    } else {
        printf("Todos os n�meros s�o diferentes! \n");
    }

    printf("Fim do programa! \n");

    system("pause");
}
