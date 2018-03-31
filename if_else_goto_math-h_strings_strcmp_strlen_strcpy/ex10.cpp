/**
10) Dados quatro números distintos, desenvolver um algoritmo que determine e imprima a soma dos três menores.
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    system("color 5D");

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, soma = 0;

    printf("Digite quatro numeros distintos: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if((n1 > n2) && (n1 > n3) && (n1 > n4)) {
        soma = n2 + n3 + n4;
        printf("Soma = %d \n", soma);

    } else if((n2 > n1) && (n2 > n3) && (n2 > n4)) {
        soma = n1 + n3 + n4;
        printf("Soma = %d \n", soma);

    } else if((n3 > n1) && (n3 > n2) && (n3 > n4)) {
        soma = n1 + n2 + n4;
        printf("Soma = %d \n", soma);

    } else {
        soma = n1 + n2 + n3;
        printf("Soma = %d \n", soma);
    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}

