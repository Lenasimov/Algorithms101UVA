/** 6. Fazer um programa que pergunta um n�mero ao usu�rio, e mostra sua tabuada completa (de 1 at� 10).
O n�mero digitado n�o pode ser zero. Caso seja, exibir mensagem de erro e retornar para nova digita��o. **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int num = 0, i = 1;

    system("cls");
    system("color 5D");

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    while(num <= 0) {
        printf("O numero nao pode ser zero nem negativo! Tente novamente! \n");
        printf("Digite um numero inteiro qualquer: ");
        scanf("%d", &num);
    }

    while(i <= 10) {
        printf("%d x %d = %d \n", num, i, (num * i));
        i++;
    }

    puts("\nFIM DO PROGRAMA!\n");

    system("pause");
}
