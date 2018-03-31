#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 57");

    char nome[30];
    int idade;
    char sexo;

    printf("Seu nome: ");
    scanf("%s", nome);

    printf("Sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);

    printf("Seu sexo (F ou M): ");
    fflush(stdin);
    scanf("%c", &sexo);

    if (sexo == 'F' && idade <= 25)
        printf ("%s está aceita! \n", nome);

    else
        printf ("%s não está aceita! \n", nome);

    system("pause");
}
