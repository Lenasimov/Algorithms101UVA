/** 4) Fa�a um programa que pe�a dois n�meros ao usu�rio e mostre qual o maior e qual o menor **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior, menor;

    printf("Digite dois n�meros: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2) {
        maior = n1;
        menor = n2;
        printf("Maior n�mero: %d \nMenor n�mero: %d \n", maior, menor);

    } else if (n1 < n2) {
        maior = n2;
        menor = n1;
        printf("Maior n�mero: %d \nMenor n�mero: %d \n", maior, menor);

    } else if (n1 == n2) {
        printf("Os n�meros s�o iguais! \n");

    }

    system("pause");
}
