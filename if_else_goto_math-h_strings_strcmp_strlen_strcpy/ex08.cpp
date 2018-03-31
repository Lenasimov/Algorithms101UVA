/** 8) Fazer uma programa para que duas palavras sejam digitadas.
Comparar se ambas são iguais.
Caso positivo, exibir a mensagem "Nomes idênticos"
Caso contrário, exibir a mensagem: "Nomes distintos".
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char str1[30], str2[30];

    printf("Digite a primeira palavra: ");
    fflush(stdin);
    gets(str1);

    printf("Digite a segunda palavra: ");
    fflush(stdin);
    gets(str2);

    if(strcmp(str1, str2) == 0) {
        printf("Palavras idênticas! \n");

    } else {
        printf("Palavras distintas! \n");
    }

    system("pause");
}
