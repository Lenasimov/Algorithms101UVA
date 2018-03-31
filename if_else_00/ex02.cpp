/** 2) Para doar sangue é necessário ter idade maior que 20 anos.
Faça um aplicativo na linguagem C que pergunte a idade
de uma pessoa e diga se ela pode doar sangue ou não.
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main() {

    system("color 9");
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade < 20) {
        printf("Você ainda não pode doar sangue! \n");

    } else {
        printf("Você já pode doar sangue! \n");
    }

    system("pause");
}
