/** 2) Fazer um programa para que o usu�rio digite tr�s n�meros,
e o programa dever� verificar qual � o n�mero do meio.
Exibir mensagem com o n�mero (do meio).
O programa n�o poder� aceitar valor zero para nenhum dos tr�s n�meros.
Criticar, dar mensagem de erro e retornar para nova digita��o do n�mero err�neo. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 57");

    int x, y, z;

    error_no_zero_allowed:
        puts("Digite tr�s n�meros: ");
        scanf("%d %d %d", &x, &y, &z);

    if((x == 0) || (y == 0) || (z ==0)) {
        printf("Zero n�o � v�lido!\n");
        goto error_no_zero_allowed;

    } else {
        printf("O n�mero do meio �: %d \n", y);
    }

    printf("Fim do programa! \n");

    system("pause");
}
