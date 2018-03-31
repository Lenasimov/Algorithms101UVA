/** 3) Fazer um programa para que o usuário digite um número
e o programa verifique se o número é múltiplo de 5. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int numInt;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &numInt);

    if(numInt % 5 == 0) {
        printf("%d é múltiplo de 5. \n", numInt);

    } else {
        printf("%d não é múltiplo de 5. \n", numInt);
    }

    system("pause");
}
