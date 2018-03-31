/** 5) Fazer um programa para que o usuário digite um número
e o programa verifique se o número é múltiplo de 2 ou de 5 ou de 10. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if((num % 2 == 0) || (num % 5 == 0) || (num % 10 == 0)) {
        printf("%d é múltiplo ou de 2, ou de 5 ou de 10. \n", num);

    } else {
        printf("%d não é múltiplo nem de 2, nem de 5 nem de 10. \n", num);
    }

    system("pause");
}
