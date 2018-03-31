/** 5) Fazer um programa para que o usuário digite um número
e o programa verifique se o número é múltiplo de 2 ou de 5 ou
de 10. Exibir mensagem de erro caso o número digitado não seja
múltiplo de nenhum destes. O programa não poderá permitir que
o número zero seja digitado, nem negativo e nem maior do que
100. Caso ocorra, mensagem de erro e retornar para nova digitação.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int num;

    error_numbers_not_allowed:
        printf("Digite um número: ");
        fflush(stdin);
        scanf("%d", &num);

    if(num <= 0 || num >= 100) {
        printf("Não aceitos zero, nem números negativos nem acima de 100. \n");
        goto error_numbers_not_allowed;

    } else if ((num % 2 == 0) || (num % 5 ==0) || (num % 10 ==0)) {
        printf("%d é múltiplo ou de 2, ou de 5 ou de 10. \n", num);

    } else {
        printf("%d não é múltiplo nem de 2, nem de 5, nem de 10. \n", num);
    }

    printf("Fim do programa! \n");

    system("pause");
}
