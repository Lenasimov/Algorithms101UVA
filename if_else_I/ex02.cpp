/** 2) Fazer um programa para que o usuário digite um número e
o programa verifique se os números estão entre o intervalo de valores
de 10 e 20. Exibir mensagem. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

    system("color 3");
    setlocale(LC_ALL, "Portuguese");

    int intNum;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &intNum);

    if(intNum >=10 && intNum <= 20) {
        printf("%d está no intervalo entre 10 e 20.\n", intNum);


    } else {
        printf("%d não está no intervalo entre 10 e 20.\n", intNum);

    }

    return 0;
}
