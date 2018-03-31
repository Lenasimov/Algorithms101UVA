/** 10) Fazer um programa para que o usuário digite um nome, uma idade e um sexo 'M' ou 'F'.
O programa deverá exibir a mensagem "Aceita!" caso a idade seja <= 25 && o sexo == 'F'.
Caso contrário, exibir a mensagem "Não aceita!". **/

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
        printf("%s está aceita! \n", nome);

    } else {
        printf("%s não está aceita! \n", nome);
    }

    system("pause");
}
