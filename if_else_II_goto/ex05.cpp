/** 5) Fazer um programa para que o usu�rio digite um n�mero
e o programa verifique se o n�mero � m�ltiplo de 2 ou de 5 ou
de 10. Exibir mensagem de erro caso o n�mero digitado n�o seja
m�ltiplo de nenhum destes. O programa n�o poder� permitir que
o n�mero zero seja digitado, nem negativo e nem maior do que
100. Caso ocorra, mensagem de erro e retornar para nova digita��o.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int num;

    error_numbers_not_allowed:
        printf("Digite um n�mero: ");
        fflush(stdin);
        scanf("%d", &num);

    if(num <= 0 || num >= 100) {
        printf("N�o aceitos zero, nem n�meros negativos nem acima de 100. \n");
        goto error_numbers_not_allowed;

    } else if ((num % 2 == 0) || (num % 5 ==0) || (num % 10 ==0)) {
        printf("%d � m�ltiplo ou de 2, ou de 5 ou de 10. \n", num);

    } else {
        printf("%d n�o � m�ltiplo nem de 2, nem de 5, nem de 10. \n", num);
    }

    printf("Fim do programa! \n");

    system("pause");
}
