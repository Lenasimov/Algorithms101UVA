/** 1) Fazer um programa para que o usu�rio digite tr�s n�meros e o
programa dever� verificar qual � o maior n�mero. Exibir mensagem
com o maior n�mero. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 57");

    int n1, n2, n3, maior;

    error_same_numbers:
        puts("Insira tr�s n�meros: ");
        scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3)) {
        printf("Os n�meros digitados s�o iguais!\n");
        goto error_same_numbers;

    } else if((n1 > n2) &&  (n1 > n3)) {
        maior = n1;
        printf("O maior n�mero digitado foi: %d. \n", maior);

    } else if (n2 > n3) {
        maior = n2;
        printf("O maior n�mero digitado foi: %d. \n", maior);

    } else {
        maior = n3;
        printf("O maior n�mero digitado foi: %d. \n", maior);
    }

    printf("Fim do programa! \n");

    system("pause");
}
