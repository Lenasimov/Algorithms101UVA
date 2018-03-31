/** 3) Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    int n;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("%d é par. \n", n);

    } else {
        printf("%d é ímpar. \n", n);
    }

    system("pause");
}
