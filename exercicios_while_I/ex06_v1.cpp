/** 6) Escrever um programa que receba um nome para que conte o número de vogais existentes nele.
O programa deverá imprimir:
- o número total de caracteres do nome;
- a quantidade  de vogais;
- a respectiva porcentagem das vogais em relação ao total de caracteres.
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char nome[10];
    int i = 0, vogais = 0, total = 0;
    float porcent = 0;

    system("cls");
    system("color 5D");

    printf("Digite seu nome: ");
    gets(nome);

    total = strlen(nome);

    while(i < total) {
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') {
            vogais++;
        }
        i++;
    }

    porcent = ((vogais * 100) / total);

    printf("Total de vogais do nome: %d \nTotal de caracteres do nome: %d \nPorcentagem de vogais: %.2f \n", vogais, total, porcent);

    puts("FIM DO PROGRAMA! \n");

    system("pause");
}
