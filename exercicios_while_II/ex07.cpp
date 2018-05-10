/** 7. Fazer um programa para que o usuário digite uma palavra de até 12 posições.
Caso a palavra tenha mais do que 12 caracteres, mensagem de erro e retorna para nova digitação.
O programa deverá imprimir apenas os caracteres com índice de valor ímpar.  **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char palavra[12] = {};
    int i = 0, tam = 0;

    system("cls");
    system("color 5D");

    printf("Digite uma palavra de ate 12 caracteres: ");
    fflush(stdin);
    gets(palavra);
    tam = strlen(palavra);

    while(tam > 12) {
        printf("A palavra deve conter ate 12 caracteres!\nTente novamente! \n");
        printf("Digite uma palavra de ate 12 caracteres: ");
        fflush(stdin);
        gets(palavra);
        tam = strlen(palavra);
    }

    while(i < tam) {
        if(i % 2 != 0) {
            printf("Caractere: %c \t Posicao: %d \n", palavra[i], i);
        }
        i++;
    }

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
