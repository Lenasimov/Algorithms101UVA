/** 5) Fazer um programa para que o usuário possa inserir três números.
A nova função a ser criada deverá retornar o menor valor.
Os números informados não podem ser iguais.
Fazer verificação, aplicar mensagem de erro e retornar para nova digitação caso os valores sejam iguais. **/

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

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    inicioN2:
        printf("Digite o segundo número: ");
        scanf("%d", &n2);

        if(n1 == n2) {
            printf("Os números não podem ser iguais! Tente novamente! \n");
            goto inicioN2;
        }

    inicioN3:
        printf("Digite o terceiro número: ");
        scanf("%d", &n3);

        if(n3 == n1 || n3 == n2) {
            printf("Os números não podem ser iguais! Tente novamente! \n");
            goto inicioN3;
        }

    menor = verificaMenorNumero(n1, n2, n3);

    printf("Menor número: %d \n", menor);

    system("pause");
    return 0;
}
