/** 8. O programa deverá exibir o caractere do meio da palavra digitada.
Para isso, serão aceitas apenas palavras com números ímpares de caracteres. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char palavra[15] = { };
    int tam = 0, i = 0, meio = 0;

    system("cls");
    system("color 5D");

    puts("Digite uma palavra com quantidade impar de caracteres: ");
    gets(palavra);
    tam = strlen(palavra);

    while(tam % 2 == 0) {
        puts("A palavra precisa ter quantidade impar de caracteres! Tente novamente! \n");
        puts("Digite uma palavra com quantidade impar de caracteres: ");
        gets(palavra);
        tam = strlen(palavra);
    }

    meio = tam/2;

    printf("Letra do meio da palavra: %c \n", palavra[meio]);

    puts("FIM DO PROGRAMA! \n");

    system("pause");
}
