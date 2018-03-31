/** 4) Fazer um programa para que o usuário digite um número
e o programa verifique se o número é múltiplo de 3 e 7. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 7 == 0) {
        printf("%d é múltiplo de 3 && 7.\n", num);

    } else {
        printf("%d não é múltiplo de 3 && 7.\n", num);
    }

    system("pause");
}
