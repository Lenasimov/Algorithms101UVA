/** 1) Fazer um programa para que o usu�rio digite dois n�meros
e o programa verifique se os n�meros s�o ou n�o iguais. Exibir mensagem.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int numInt1, numInt2;

    printf("Digite dois n�meros: ");
    scanf("%d %d", &numInt1, &numInt2);

    if(numInt1 == numInt2) {
        printf("Os n�meros s�o iguais! \n");

    } else {
        printf("Os n�meros s�o diferentes!\n");
    }

    system("pause");
}
