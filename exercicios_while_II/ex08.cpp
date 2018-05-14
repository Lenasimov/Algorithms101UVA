/** 8. Fazer um programa para que o usuário digite uma palavra de até 15 posições.
Caso a palavra tenha menos do que 6 caracteres OU mais do que 15 caracteres,
exibir mensagem de erro e retornar para nova digitação.
O programa deverá imprimir apenas os caracteres com índice de valor par.
Ao final exibir a média dos índices pares computados.  **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char palavra[15] = {};
    int i = 0, tam = 0, soma = 0, totalPares = 0;
    float media = 0;

    system("cls");
    system("color 5D");

    printf("Digite uma palavra com minimo 6 letras e maximo 15 letras: ");
    gets(palavra);
    tam = strlen(palavra);

    while(tam < 6 || tam > 15) {
        printf("A palavra deve ter no minimo 6 letras e no maximo 15 letras! \nTente novamente! \n");
        printf("Digite uma palavra com minimo 6 letras e maximo 15 letras: ");
        gets(palavra);
        tam = strlen(palavra);
    }

    while(i <= tam) {
        if(i % 2 == 0) {
            printf("Caractere: %c \t Posicao: %d \n", palavra[i], i);
            soma += i;
            totalPares++;
        }
        i++;
    }

    media = soma/totalPares;

    printf("Media dos indices pares: %.2f \n", media);
    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
