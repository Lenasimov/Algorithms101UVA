/** 4) Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior, menor;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    if(n1 > n2) {
        maior = n1;
        menor = n2;
        printf("Maior número: %d \nMenor número: %d \n", maior, menor);

    } else if (n1 < n2) {
        maior = n2;
        menor = n1;
        printf("Maior número: %d \nMenor número: %d \n", maior, menor);

    } else if (n1 == n2) {
        printf("Os números são iguais! \n");

    }

    system("pause");
}
