/* 8) Fazer um programa para que o usuário digite um número
e o programa imprima o seu antecessor e o seu sucessor. */

#include<stdio.h>
#include<stdlib.h>

main() {

    int num;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num);

    printf("Usuario digitou: %d \n", num);
    printf("Antecessor: %d \n", num - 1);
    printf("Sucessor: %d \n", num + 1);

    system("pause");

}
