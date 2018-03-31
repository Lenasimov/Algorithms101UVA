/** 3) Faça um programa para que o usuário digite uma palavra, depois digite uma segunda palavra
e verifique qual das palavras é a menor. Exiba a menor palavra. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    system("color 5D");

    char str1[30], str2[30];

    printf("Digite a primeira palavra: ");
    fflush(stdin);
    gets(str1);

    printf("Digite a segunda palavra: ");
    fflush(stdin);
    gets(str2);

    if(strlen(str1) < strlen(str2)) {
        printf("A menor palavra digitada foi: %s. \n", str1);

    } else if(strlen(str1) == strlen(str2)) {
        printf("As palavras tem o mesmo tamanho (numero de caracteres). \n | %s & %s | \n", str1, str2);

    } else {
        printf("A menor palavra digitada foi: %s. \n", str2);
    }

    puts("Fim do programa! \n");

    system("pause");
}
