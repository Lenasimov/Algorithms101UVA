/** 3. Fazer um programa que recebe um número inteiro qualquer e mostre os números pares e ímpares
(separados em duas colunas), de 1 até esse número inteiro.
O número digitado não pode ser zero e nem negativo.
Caso seja, exibir mensagem de erro e retornar para nova digitação. **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int i = 1, num = 0;

    system("cls");
    system("color 5D");

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    while(num <= 0) {
        puts("O numero nao pode ser zero nem negativo. Tente novamente! \n");
        printf("Digite um numero inteiro qualquer: ");
        scanf("%d", &num);
    }

    puts("IMPARES \t PARES \n");

    while(i <= num) {
        if(i % 2 != 0) {
            printf("    %d \t", i);

        } else {
            printf("    \t %d \n", i);
        }
        i++;
    }

    puts("\nFIM DO PROGRAMA!\n");

    system("pause");
}
