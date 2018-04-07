/** 2) Uma empresa abriu uma linha de cr�dito para os funcion�rios.
O valor da presta��o n�o pode ultrapassar 30% do sal�rio.

Fa�a um programa que receba o sal�rio, o valor do empr�stimo e o n�mero de presta��es
e informe se o empr�stimo pode ser concedido.

Nenhum dos valores informados pode ser zero ou negativo.
Caso aconte�a, exibir mensagem de erro e retornar para nova digita��o daquela informa��o. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void calculaEmprestimo(float sal, float emp, float limite, float valParc, int numParcelas) {

    limite = sal * 0.3;
    valParc = emp / numParcelas;

    if(valParc > limite) {
        printf("Empr�stimo recusado! \n");

    } else {
        printf("Empr�stimo concedido! \nValor de cada parcela: R$%.2f \n", valParc);
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float salario, valorEmprestimo, limite, valorParcelado;
    int numPrestacoes;

    inicio1:
        printf("Informe o sal�rio: R$");
        scanf("%f", &salario);

        if(salario <= 0) {
            printf("O sal�rio n�o pode ser negativo nem igual a zero! Por favor, tente novamente! \n");
            goto inicio1;
        }

    inicio2:
        printf("Informe o valor do empr�stimo: R$");
        scanf("%f", &valorEmprestimo);

        if(valorEmprestimo <= 0) {
            printf("O empr�stimo n�o pode ser negativo nem igual a zero! Por favor, tente novamente! \n");
            goto inicio2;
        }

    inicio3:
        printf("Informe a quantidade de parcelas: ");
        scanf("%d", &numPrestacoes);

        if(numPrestacoes <= 0) {
            printf("A quantidade de presta��es n�o pode ser negativa nem igual a zero! Por favor, tente novamente! \n");
            goto inicio3;
        }

    calculaEmprestimo(salario, valorEmprestimo, limite, valorParcelado, numPrestacoes);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
