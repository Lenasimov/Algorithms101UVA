/**  4) Fazer um programa para que o usuário digite dois números
e o programa verifique se os números são múltiplos de 2 e 4. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int numInt1, numInt2;

    puts("Digite dois números: ");
    scanf("%d %d", &numInt1, &numInt2);

    if(numInt1 % 2 == 0 && numInt1 % 4 == 0) {
        printf("%d é múltiplo de 2 && 4. \n", numInt1);

    } else {
        printf("%d não é múltiplo de 2 && 4. \n", numInt1);
    }

    if(numInt2 % 2 == 0 && numInt2 % 4 == 0) {
        printf("%d é múltiplo de 2 && 4. \n", numInt2);

    } else {
        printf("%d não é múltiplo de 2 && 4. \n", numInt2);
    }

    system("pause");
}
