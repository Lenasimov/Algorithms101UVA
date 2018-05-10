/** 7. Fazer um programa para que o usuário digite uma palavra que tenha a quantidade de caracteres ímpares.
Se for par, exibir mensagem de erro e retornar para nova digitação. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char word[10];
    int wordLength = 0;

    system("cls");
    system("color 5D");

    puts("Digite uma palavra: ");
    gets(word);

    wordLength = strlen(word);

    while(wordLength % 2 == 0) {
            puts("\nA palavra deve ter uma quantidade impar de caracteres. Tente novamente!");
            puts("Digite uma palavra: ");
            gets(word);
            wordLength = strlen(word);
    }

    printf("A palavra digitada contem: %d caracteres. \n", wordLength);

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
