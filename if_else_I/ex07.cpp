/** 7) Fazer um programa para que o usu�rio digite tr�s n�meros
e o programa verifique se os n�meros s�o iguais. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Digite tr�s n�meros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3)) {
        printf("Todos os n�meros s�o iguais! \n");

    }  else if((n1 == n2) || (n1 == n3) || (n2 == n3)) {
        printf("Apenas dois n�meros s�o iguais! \n");

    } else {
        printf("Os n�meros s�o diferentes! \n");
    }

    system("pause");
}
