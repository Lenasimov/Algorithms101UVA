/**  4) Fazer um programa para que o usu�rio digite dois n�meros
e o programa verifique se os n�meros s�o m�ltiplos de 2 e 4. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int numInt1, numInt2;

    puts("Digite dois n�meros: ");
    scanf("%d %d", &numInt1, &numInt2);

    if(numInt1 % 2 == 0 && numInt1 % 4 == 0) {
        printf("%d � m�ltiplo de 2 && 4. \n", numInt1);

    } else {
        printf("%d n�o � m�ltiplo de 2 && 4. \n", numInt1);
    }

    if(numInt2 % 2 == 0 && numInt2 % 4 == 0) {
        printf("%d � m�ltiplo de 2 && 4. \n", numInt2);

    } else {
        printf("%d n�o � m�ltiplo de 2 && 4. \n", numInt2);
    }

    system("pause");
}
