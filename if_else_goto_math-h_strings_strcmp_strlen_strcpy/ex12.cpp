/**

12) Desenvolver um algoritmo para ler um n�mero "x"
e calcular e imprimir o valor de "y" de acordo com as seguintes condi��es:

y = x , se x < 1;
y = 0 , se x = 1;
y = x� , se x > 1;

**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    int x, y;

    inicio:
        printf("Digite um n�mero inteiro para x: ");
        fflush(stdin);
        scanf("%d", &x);

    if(x < 1) {
        y = x;
        printf("y = %d \n", y);

    } else if(x == 1) {
        y = 0;
        printf("y = %d \n", y);

    } else if( x > 1) {
        y = pow(x,2);
        printf("y = %d \n", y);

    } else {
        printf("O valor digitado n�o � um n�mero inteiro. Por favor, tente novamente. \n");
        goto inicio;
    }

    printf("Fim do programa! \n");

    system("pause");
}
