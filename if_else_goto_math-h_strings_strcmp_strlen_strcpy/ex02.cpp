/** 2) Fa�a um programa para que o usu�rio digite uma palavra e exiba quantos caracteres tem a palavra,
depois concatene a palavra digitada pelo usu�rio com a palavra "linda" e exiba o conte�do final da concatena��o. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char str[30];
    char container[100];

    printf("Digite uma string (sequ�ncia de caracteres): ");
    gets(str);

    printf("\n | strlen(str) = %d | \n", strlen(str));

    strcpy(container, str);

    strcat(container, " linda! \n");

    printf("%s \n", container);

    puts("Fim do programa! \n");

    system("pause");
}
