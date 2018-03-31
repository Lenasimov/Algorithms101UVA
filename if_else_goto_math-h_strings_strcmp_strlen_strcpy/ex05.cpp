/** 5) Faça um programa para que o usuário digite três palavras,
concatene as três e exiba a informação concatenada. **/

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

    printf("As três palavras concatenadas: %s. \n", str1);

    system("pause");
}
