/** 2) Fazer um programa para que o usu�rio digite um n�mero e
o programa verifique se os n�meros est�o entre o intervalo de valores
de 10 e 20. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int intNum;

    printf("Digite um n�mero inteiro qualquer: ");
    scanf("%d", &intNum);

    if(intNum >=10 && intNum <= 20) {
        printf("%d est� no intervalo entre 10 e 20.\n", intNum);


    } else {
        printf("%d n�o est� no intervalo entre 10 e 20.\n", intNum);

    }

    return 0;
}
