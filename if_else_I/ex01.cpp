/** 1) Fazer um programa para que o usuário digite dois números
e o programa verifique se os números são ou não iguais. Exibir mensagem.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int numInt1, numInt2;

    printf("Digite dois números: ");
    scanf("%d %d", &numInt1, &numInt2);

    if(numInt1 == numInt2) {
        printf("Os números são iguais! \n");

    } else {
        printf("Os números são diferentes!\n");
    }

    system("pause");
}
