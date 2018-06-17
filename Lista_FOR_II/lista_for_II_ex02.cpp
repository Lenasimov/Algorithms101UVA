/** 2. Faça um programa que leia duas palavras do teclado e diz se elas são iguais ou diferentes.
O programa deve dizer ainda se alguma das palavras digitadas é igual a palavra "papagaio". **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
    char word1[30] = {}, word2[30] = {};
    int i = 0;

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    puts(": : : : Comparing Strings : : : : \n");

    printf("\nEnter 1º word: ");
    gets(word1);

    printf("\nEnter 2º word: ");
    gets(word2);

    if(strcmp(word1, word2) == 0)
    {
        printf("\nWord 1 and Word 2 are the same! \n");

    } else
    {
        printf("\nWord 1 and Word 2 are different! \n");
    }

    if(strcmp(word1, "papagaio") == 0 && strcmp(word2, "papagaio") == 0)
    {
        printf("\nBoth words are equal to \"papagaio\" \n");

    } else if(strcmp(word1, "papagaio") == 0)
    {
        printf("\nWord 1 is equal to \"papagaio\" \n");

    } else if(strcmp(word2, "papagaio") == 0)
    {
        printf("\nWord 2 is equal to \"papagaio\" \n");
    }

    puts("\nTHE END!\n");
    system("pause");
}
