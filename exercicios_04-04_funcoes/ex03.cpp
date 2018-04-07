/** 3) Faça um programa que pergunte a mesada de um adolescente, e se ele quer comprar algum produto.

Caso ele responda "não", o programa deverá imprimir uma mensagem mostrando qual o valor da mesada dele.

Caso responda "sim", o programa deverá perguntar qual o valor do produto, e mostrar na tela o saldo final
(deduzir a mesada do valor do produto).

O valor do produto não pode ser maior que o valor da mesada. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void calculaMesada(float mesada, char resp[10], float valProd, float saldoFinal) {

    if(strcmp(resp, "Nao") == 0) {
        printf("Valor da mesada: R$ %.2f \n", mesada);

    } else if(strcmp(resp, "Sim") == 0) {
        printf("Informe o valor do produto: R$");
        fflush(stdin);
        scanf("%f", &valProd);

        if(valProd > mesada) {
            printf("Saldo insuficiente! \n");

        } else {
            saldoFinal = mesada - valProd;
            printf("Compra realizada com sucesso! \nSaldo final: R$%.2f \n", saldoFinal);
        }

    } else {
        printf("Opção inválida! Por favor, tente novamente! \n");
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float mesada, valProd, saldoFinal;
    char resposta[10];

    inicio1:
        printf("Informe o valor da mesada: R$");
        fflush(stdin);
        scanf("%f", &mesada);

        if(mesada <= 0) {
            printf("O valor da mesada não pode ser negativo nem igual a zero! Tente novamente! \n");
            goto inicio1;
        }

    inicio2:
        printf("Deseja comprar um produto? Sim ou Nao? ");
        fflush(stdin);
        scanf("%s", resposta);

    calculaMesada(mesada, resposta, valProd, saldoFinal);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
