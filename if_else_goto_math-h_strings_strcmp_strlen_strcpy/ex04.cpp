/** 4) Fa�a um programa para que o usu�rio possa digitar uma palavra.
Verifique se a palavra tem quantidade de caracteres par ou �mpar.
Exibir a quantidade de caractere. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    char str[30];

    printf("Digite uma palavra: ");
    gets(str);

    if(strlen(str) % 2 == 0) {
        printf("A palavra %s tem %d caracteres, portanto eh par. \n", str, strlen(str));

    } else {
        printf("A palavra %s tem %d caracteres, portanto eh impar. \n", str, strlen(str));
    }

    puts("Fim do programa! \n");

    system("pause");
}



