/** 3) Fazer um programa para que o usu�rio digite um n�mero
e o programa verifique se o n�mero � m�ltiplo de 5. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int numInt;

    printf("Digite um n�mero inteiro qualquer: ");
    scanf("%d", &numInt);

    if(numInt % 5 == 0) {
        printf("%d � m�ltiplo de 5. \n", numInt);

    } else {
        printf("%d n�o � m�ltiplo de 5. \n", numInt);
    }

    system("pause");
}
