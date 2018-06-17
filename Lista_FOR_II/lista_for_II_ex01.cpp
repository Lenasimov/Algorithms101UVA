/** 1. Faça um programa que leia três palavras e imprima as três palavras na ordem inversa. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main()
{
    char names[3][30] = {{}};
    int i = 0, j = 0;

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    puts(": : : : Names : : : :\n");
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter %dº name: ", i + 1);
        gets(names[i]);
    }

    puts("\n: : : : Names in decreasing order : : : :\n");
    for(i = 3; i >= 0; i--)
    {
        printf("%s \n", names[i]);
    }

    puts("\nTHE END!\n");
    system("pause");
}
