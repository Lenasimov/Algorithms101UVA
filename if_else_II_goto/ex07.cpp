/** 7) Fazer um programa para que o usu�rio digite um nome, uma idade e um sexo 'M' ou 'F'.
O programa dever� exibir a mensagem:
"%s est� aceita no projeto!" caso
(idade >= 18 && idade <= 35) &&  (sexo == 'F').

Caso contr�rio, exibir a mensagem: "%s n�o aceita no projeto".

O programa dever� verificar se a idade digitada � negativa, zero ou maior do que 100.
Caso seja, mensagem de erro e retornar para nova digita��o. O sexo s� poder� ser digitado
M ou F. Caso contr�rio, mensagem de erro e retorna para nova digita��o.
**/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    char sexo;
    int idade;

    inicio:
        printf("Informe seu nome: ");
        fflush(stdin);
        scanf("%s", nome);

        printf("Informe sua idade: ");
        fflush(stdin);
        scanf("%d", &idade);

        printf("Informe seu sexo (F | M): ");
        fflush(stdin);
        scanf("%c", &sexo);

    if((idade <= 0) || (idade == 100)) {
        printf("A idade n�o pode ser negativa, nem igual a zero nem maior que 100. \n");
        goto inicio;

    } else if (!(sexo == 'F') && !(sexo == 'M')) {
        printf("O sexo infelizmente neste caso s� pode ser F ou M. \n");
        goto inicio;

    } else if ( ((idade >= 18) && (idade <= 35)) && sexo == 'F') {
        printf("%s est� aceita no projeto! \n", nome);

    } else {
        printf("%s n�o est� aceita no projeto! \n", nome);
    }

    printf("Fim do programa! \n");

    system("pause");
}
