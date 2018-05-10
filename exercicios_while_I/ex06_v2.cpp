/** 6.	Escrever um programa que receba um nome para que conte o número de vogais existentes nele.

O programa deverá imprimir:

- O número total de caracteres do nome;
- A quantidade de vogais do nome;
- A respectiva porcentagem das vogais em relação ao total de caracteres.

**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char name[10];
    int nameLength = 0, totalVowels = 0, i = 0;
    float percentVowels = 0;

    system("cls");
    system("color 5D");

    puts("Digite um nome: ");
    gets(name);

    nameLength = strlen(name);
    i = nameLength - 1;

    while(i >= 0) {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') {
            totalVowels++;
        }
        i--;
    }

    percentVowels = ((totalVowels * 100) / nameLength);

    printf("O nome digitado contem: %d caracteres. \nTotal de vogais: %d \nPorcentagem de vogais: %.2f \n", nameLength, totalVowels, percentVowels);

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
