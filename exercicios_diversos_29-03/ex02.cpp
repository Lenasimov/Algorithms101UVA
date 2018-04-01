/** 2) Fazer um programa para que o usuário possa digitar quatro palavras.
O programa não poderá aceitar palavras com menos de três caracteres e com mais de 14 caracteres.
Ao final, o programa deverá exibir quantas palavras possuem a mesma quantidade de caracteres. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char str1[30], str2[30], str3[30], str4[30];
    int len1 = 0, len2 = 0, len3 = 0, len4 = 0, length = 0, counter = 0;

    inicio1:
        printf("Digite a primeira palavra: ");
        gets(str1);
        len1 = strlen(str1);
        counter += 1;

        if(len1 < 3 || len1 > 14) {
            printf("As palavras NÃO  podem ter menos de 3 caracteres nem mais de 14 caracteres! \n");
            goto inicio1;
        }

    inicio2:
        printf("Digite a segunda palavra: ");
        gets(str2);
        len2 = strlen(str2);
        if(len2 < 3 || len2 > 14) {
            printf("As palavras NÃO  podem ter menos de 3 caracteres nem mais de 14 caracteres! \n");
            goto inicio2;
        }

        if(len1 == len2) {
            counter += 1;
        }

    inicio3:
        printf("Digite a terceira palavra: ");
        gets(str3);
        len3 = strlen(str3);

        if(len3 < 3 || len3 > 14) {
            printf("As palavras NÃO  podem ter menos de 3 caracteres nem mais de 14 caracteres! \n");
            goto inicio3;
        }

        if(len3 == len1 || len3 == len2) {
            counter += 1;
        }

    inicio4:
        printf("Digite a quarta palavra: ");
        gets(str4);
        len4 = strlen(str4);

        if(len4 < 3 || len4 > 14) {
            printf("As palavras NÃO  podem ter menos de 3 caracteres nem mais de 14 caracteres! \n");
            goto inicio4;
        }

        if(len4 == len1 || len4 == len2 || len4 == len3) {
            counter += 1;
        }

        printf("Palavras com a mesma quantidade de caracteres: %d \n", counter);

    system("pause");
    return 0;
}
