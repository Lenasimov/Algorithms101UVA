/** 5) Fazer um programa para que o usu�rio informe um n�mero
e se esse n�mero for maior que 20, imprimir a metade desse n�mero.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    int number, half;

    printf("Digite um n�mero: ");
    scanf("%d", &number);

    if(number >= 20) {
        half = number / 2;
        printf("%d / 2 = %d \n", number, half);

    } else {
        printf("%d � menor que 20. \nFim do programa!\n", number);
    }

    system("pause");
}
