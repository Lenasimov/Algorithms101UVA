/** 4) Fazer um programa para que o usu�rio possa inserir dois n�meros.
A nova fun��o a ser criada dever� exibir qual o maior n�mero.
Os n�meros informados n�o podem ser iguais.
Fazer verifica��o, aplicar mensagem de erro e retornar para nova digita��o caso os valores sejam iguais. **/

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

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    inicioN2:
        printf("Digite o segundo n�mero: ");
        scanf("%d", &n2);

        if(n1 == n2) {
            printf("Os n�meros n�o podem ser iguais! Tente novamente! \n");
            goto inicioN2;
        }

    maior = verificaMaiorNumero(n1, n2);

    printf("Maior n�mero: %d \n", maior);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
