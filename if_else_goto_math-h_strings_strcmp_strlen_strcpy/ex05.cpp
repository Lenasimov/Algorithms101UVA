/** 5) Fa�a um programa para que o usu�rio digite tr�s palavras,
concatene as tr�s e exiba a informa��o concatenada. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    char str1[90], str2[30], str3[30], container[100];

    printf("Digite a primeira palavra: ");
    fflush(stdin);
    gets(str1);

    printf("Digite a segunda palavra: ");
    fflush(stdin);
    gets(str2);

    printf("Digite a terceira palavra: ");
    fflush(stdin);
    gets(str3);

    strcat(str1, str2);
    strcat(str1, str3);

    printf("As tr�s palavras concatenadas: %s. \n", str1);

    system("pause");
}
