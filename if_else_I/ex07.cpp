/** 7) Fazer um programa para que o usuário digite três números
e o programa verifique se os números são iguais. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if((n1 == n2) && (n1 == n3)) {
        printf("Todos os números são iguais! \n");

    }  else if((n1 == n2) || (n1 == n3) || (n2 == n3)) {
        printf("Apenas dois números são iguais! \n");

    } else {
        printf("Os números são diferentes! \n");
    }

    system("pause");
}
