/**
7) Um comerciante comprou um produto e quer vendê-lo com lucro de 50% se o valor da compra
for menor que R$560,00. Caso contrário, o lucro será de 20%. Entrar com o valor do produto e exibir
o valor da venda. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    float valInitComp, valFinVenda, percentLucro;

    printf("Informe o valor do produto: R$");
    scanf("%f", &valInitComp);

    if(valInitComp < 560) {
        percentLucro = 0.50;
        valFinVenda = (percentLucro * valInitComp) + valInitComp;
        printf("Valor final de venda: R$%.2f \n", valFinVenda);

    } else {
        percentLucro = 0.20;
        valFinVenda = (percentLucro * valInitComp) + valInitComp;
        printf("Valor final de venda: R$%.2f \n", valFinVenda);
    }

    system("pause");
}
