/** 2. Fazer um programa para que o usuário possa digitar uma palavra e imprimir as 4 últimas letras da palavra **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char palavra[10] = {};
    int i = 0, tam = 0;

    system("cls");
    system("color 5D");

    printf("Digite uma palavra: ");
    gets(palavra);

    tam = strlen(palavra);

    while(i < 5) {
        printf("%c \n", palavra[tam]);
        tam--;
        i++;
    }

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
