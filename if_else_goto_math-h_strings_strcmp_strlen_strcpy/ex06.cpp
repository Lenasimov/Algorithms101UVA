/** 6) Fa�a um programa para que o usu�rio possa digitar um n�mero inteiro.
Se o n�mero for par, multiplicar o valor por 2. Caso seja �mpar, dividir por 2.
Em ambos os caso exibir o resultado. O programa n�o pode aceitar valor zero
e nem negativo. Caso seja digitado, mensagem de erro e retornar para nova digita��o. **/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    system("color 5D");

    int numInt;

    inicio:
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numInt);

    if(numInt <= 0) {
        printf("N�o s�o aceitos n�meros negativos e nem 0 (zero). \n");
        goto inicio;

    } else if(numInt % 2 == 0) {
        printf("%d x 2 = %d \n", numInt, numInt * 2);

    } else {
        printf("%d / 2 = %d \n", numInt, numInt / 2);
    }

    puts("Fim do programa! \n");

    system("pause");
}
