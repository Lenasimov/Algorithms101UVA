/** 2) Fazer um programa para que o usuário digite três números,
e o programa deverá verificar qual é o número do meio.
Exibir mensagem com o número (do meio).
O programa não poderá aceitar valor zero para nenhum dos três números.
Criticar, dar mensagem de erro e retornar para nova digitação do número errôneo. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 57");

    int x, y, z;

    error_no_zero_allowed:
        puts("Digite três números: ");
        scanf("%d %d %d", &x, &y, &z);

    if((x == 0) || (y == 0) || (z ==0)) {
        printf("Zero não é válido!\n");
        goto error_no_zero_allowed;

    } else {
        printf("O número do meio é: %d \n", y);
    }

    printf("Fim do programa! \n");

    system("pause");
}
