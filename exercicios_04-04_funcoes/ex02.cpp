/** 2) Uma empresa abriu uma linha de crédito para os funcionários.
O valor da prestação não pode ultrapassar 30% do salário.

Faça um programa que receba o salário, o valor do empréstimo e o número de prestações
e informe se o empréstimo pode ser concedido.

Nenhum dos valores informados pode ser zero ou negativo.
Caso aconteça, exibir mensagem de erro e retornar para nova digitação daquela informação. **/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void calculaEmprestimo(float sal, float emp, float limite, float valParc, int numParcelas) {

    limite = sal * 0.3;
    valParc = emp / numParcelas;

    if(valParc > limite) {
        printf("Empréstimo recusado! \n");

    } else {
        printf("Empréstimo concedido! \nValor de cada parcela: R$%.2f \n", valParc);
    }

}

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    float salario, valorEmprestimo, limite, valorParcelado;
    int numPrestacoes;

    inicio1:
        printf("Informe o salário: R$");
        scanf("%f", &salario);

        if(salario <= 0) {
            printf("O salário não pode ser negativo nem igual a zero! Por favor, tente novamente! \n");
            goto inicio1;
        }

    inicio2:
        printf("Informe o valor do empréstimo: R$");
        scanf("%f", &valorEmprestimo);

        if(valorEmprestimo <= 0) {
            printf("O empréstimo não pode ser negativo nem igual a zero! Por favor, tente novamente! \n");
            goto inicio2;
        }

    inicio3:
        printf("Informe a quantidade de parcelas: ");
        scanf("%d", &numPrestacoes);

        if(numPrestacoes <= 0) {
            printf("A quantidade de prestações não pode ser negativa nem igual a zero! Por favor, tente novamente! \n");
            goto inicio3;
        }

    calculaEmprestimo(salario, valorEmprestimo, limite, valorParcelado, numPrestacoes);

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
