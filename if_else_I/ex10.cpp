/** 10) Fazer um programa para que o usu�rio digite um nome, uma idade e um sexo 'M' ou 'F'.
O programa dever� exibir a mensagem "Aceita!" caso a idade seja <= 25 && o sexo == 'F'.
Caso contr�rio, exibir a mensagem "N�o aceita!". **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 57");
    setlocale(LC_ALL, "Portuguese");

    char nome[100], sexo;
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Informe sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);

    printf("Informe seu sexo (F | M): ");
    fflush(stdin);
    scanf("%c", &sexo);

    if(idade <= 25 && (sexo == 'F')) {
        printf("%s est� aceita! \n", nome);

    } else {
        printf("%s n�o est� aceita! \n", nome);
    }

    system("pause");
}
