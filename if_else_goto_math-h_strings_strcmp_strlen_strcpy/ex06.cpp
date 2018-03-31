/** 6) Faça um programa para que o usuário possa digitar um número inteiro.
Se o número for par, multiplicar o valor por 2. Caso seja ímpar, dividir por 2.
Em ambos os caso exibir o resultado. O programa não pode aceitar valor zero
e nem negativo. Caso seja digitado, mensagem de erro e retornar para nova digitação. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int numInt;

    inicio:
        printf("Digite um número inteiro: ");
        scanf("%d", &numInt);

    if(numInt <= 0) {
        printf("Não são aceitos números negativos e nem 0 (zero). \n");
        goto inicio;

    } else if(numInt % 2 == 0) {
        printf("%d x 2 = %d \n", numInt, numInt * 2);

    } else {
        printf("%d / 2 = %d \n", numInt, numInt / 2);
    }

    puts("Fim do programa! \n");

    system("pause");
}
