/** 3) Escreva um programa em C que recebe um inteiro e diga se � par ou �mpar.
Use o operador matem�tico % (resto da divis�o ou m�dulo) e o teste condicional if.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 3");

    int n;

    printf("Digite um n�mero inteiro qualquer: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("%d � par. \n", n);

    } else {
        printf("%d � �mpar. \n", n);
    }

    system("pause");
}
