/** 1) Fazer um programa para que o usu�rio informe tr�s palavras.
As palavras n�o podem ser repetidas.
Caso aconte�a, exibir mensagem de erro e retorna para nova digita��o daquela informa��o.
Ao final o programa dever� concatenar as tr�s palavras e exibir para o usu�rio. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void concatenaStrings(char p1[30], char p2[30], char p3[30]) {

    strcat(p1, p2);
    strcat(p1, p3);

    printf("Concatena��o: %s \n", p1);

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char str1[30], str2[30], str3[30];

    printf("Digite a primeira palavra: ");
    gets(str1);

    inicioStr2:
        printf("Digite a segunda palavra: ");
        gets(str2);

        if(strcmp(str1, str2) == 0) {
            printf("As palavras n�o podem ser iguais! Tente novamente! \n");
            goto inicioStr2;
        }

    inicioStr3:
        printf("Digite a terceira palavra: ");
        gets(str3);

        if(strcmp(str3, str1) == 0 || strcmp(str3, str2) == 0) {
            printf("As palavras n�o podem ser iguais! Tente novamente! \n");
            goto inicioStr3;
        }

    concatenaStrings(str1, str2, str3);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
