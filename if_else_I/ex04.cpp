/** 4) Fazer um programa para que o usu�rio digite um n�mero
e o programa verifique se o n�mero � m�ltiplo de 3 e 7. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 7 == 0) {
        printf("%d � m�ltiplo de 3 && 7.\n", num);

    } else {
        printf("%d n�o � m�ltiplo de 3 && 7.\n", num);
    }

    system("pause");
}
