/** 3. Fazer um programa para que o usu�rio possa digitar um nome,
e o programa dever� exibir a letra e a respectiva posi��o. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char nome[10] = {};
    int i = 0, tam = 0;

    system("cls");
    system("color 5D");

    printf("Digite um nome: ");
    gets(nome);

    tam = strlen(nome);

    while(i < tam) {
        printf("Letra: %c \tIndice/Posicao: %d \n", nome[i], i);
        i++;
    }

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
