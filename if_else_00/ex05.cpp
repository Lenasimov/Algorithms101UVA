/** 5) Fazer um programa para que o usuário informe um número
e se esse número for maior que 20, imprimir a metade desse número.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    int number, half;

    printf("Digite um número: ");
    scanf("%d", &number);

    if(number >= 20) {
        half = number / 2;
        printf("%d / 2 = %d \n", number, half);

    } else {
        printf("%d é menor que 20. \nFim do programa!\n", number);
    }

    system("pause");
}
