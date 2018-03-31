/** 9) Fazer um programa para que o usuário possa digitar uma letra.
Verificar se esta letra faz parte das vogais.
Caso positivo, exibir a mensagem: "Vogal digitada corretamente".
Caso contrário, exibir a mensagem: "Letra digitada não é uma vogal". **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

main() {

    system("color 5D");

    char letra[2];

    inicio:
        printf("Digite uma letra: ");
        scanf("%s", &letra);

    if(strcmp(letra, "a") == 0 || strcmp(letra, "A") == 0 || strcmp(letra, "e") == 0 || strcmp(letra, "E") == 0 || strcmp(letra, "i") == 0 || strcmp(letra, "I") == 0 || strcmp(letra, "o") == 0 || strcmp(letra, "O") == 0 || strcmp(letra, "u") == 0 || strcmp(letra, "U") == 0) {
        printf("Letra: %s eh uma vogal. \n", letra);

    } else {
        printf("Letra: %s nao eh uma vogal. \n", letra);
        goto inicio;
    }

    puts("Fim do programa! \n");

    system("pause");
}
