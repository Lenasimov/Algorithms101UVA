/** 1) Fazer um programa para que o usuário digite três números e o
programa deverá verificar qual é o maior número. Exibir mensagem
com o maior número. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 57");

    int n1, n2, n3, maior;

    error_same_numbers:
        puts("Insira três números: ");
        scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3)) {
        printf("Os números digitados são iguais!\n");
        goto error_same_numbers;

    } else if((n1 > n2) &&  (n1 > n3)) {
        maior = n1;
        printf("O maior número digitado foi: %d. \n", maior);

    } else if (n2 > n3) {
        maior = n2;
        printf("O maior número digitado foi: %d. \n", maior);

    } else {
        maior = n3;
        printf("O maior número digitado foi: %d. \n", maior);
    }

    printf("Fim do programa! \n");

    system("pause");
}
