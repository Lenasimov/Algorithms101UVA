/** 5) Fazer um programa para que o usu�rio possa inserir tr�s n�meros.
A nova fun��o a ser criada dever� retornar o menor valor.
Os n�meros informados n�o podem ser iguais.
Fazer verifica��o, aplicar mensagem de erro e retornar para nova digita��o caso os valores sejam iguais. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int verificaMenorNumero(int n1, int n2, int n3) {

    int menor = 0;

    if(n1 < n2 && n1 < n3) {
        return menor = n1;

    } else if (n2 < n1 && n2 < n3) {
        return menor = n2;

    } else {
        return menor = n3;
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, menor;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    inicioN2:
        printf("Digite o segundo n�mero: ");
        scanf("%d", &n2);

        if(n1 == n2) {
            printf("Os n�meros n�o podem ser iguais! Tente novamente! \n");
            goto inicioN2;
        }

    inicioN3:
        printf("Digite o terceiro n�mero: ");
        scanf("%d", &n3);

        if(n3 == n1 || n3 == n2) {
            printf("Os n�meros n�o podem ser iguais! Tente novamente! \n");
            goto inicioN3;
        }

    menor = verificaMenorNumero(n1, n2, n3);

    printf("Menor n�mero: %d \n", menor);

    system("pause");
    return 0;
}
