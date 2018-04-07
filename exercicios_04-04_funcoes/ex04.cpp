/** 4) Fazer um programa para que o usuário possa inserir dois números.
A nova função a ser criada deverá exibir qual o maior número.
Os números informados não podem ser iguais.
Fazer verificação, aplicar mensagem de erro e retornar para nova digitação caso os valores sejam iguais. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int verificaMaiorNumero(int num1, int num2) {

    int maior = 0;

    if(num1 > num2) {
        return maior = num1;

    } else {
        return maior = num2;
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    inicioN2:
        printf("Digite o segundo número: ");
        scanf("%d", &n2);

        if(n1 == n2) {
            printf("Os números não podem ser iguais! Tente novamente! \n");
            goto inicioN2;
        }

    maior = verificaMaiorNumero(n1, n2);

    printf("Maior número: %d \n", maior);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
