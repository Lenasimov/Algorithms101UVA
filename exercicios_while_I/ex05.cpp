/** 5) Fazer um programa para que o usuário digite uma frase com no máximo 40 letras.
Se o tamanho for maior que 40, dar uma mensagem de erro e solicitar nova digitação.
Exibir a frase na posição vertical (uma letra em baixo da outra). **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main() {

    char frase[40];
    int i = 0, tam = 0;

    system("cls");
    system("color 5D");

    inicio_frase:
        printf("Digite uma frase de ate 40 caracteres (espacos em branco contam):  ");
        fflush(stdin);
        gets(frase);

        tam = strlen(frase);

        if(tam > 40) {
            printf("A frase deve ter ate 40 caracteres, espacos em branco contam. Tente novamente! \n");
            goto inicio_frase;
        }

    while(i < tam) {
        printf("%c \n", frase[i]);
        i++;
    }

    puts("\nFIM DO PROGRAMA! \n");

    system("pause");
}
