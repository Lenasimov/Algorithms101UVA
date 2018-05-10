/** 3. Fazer um programa para que o usuário possa digitar um nome,
e o programa deverá exibir a letra e a respectiva posição. **/

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
