/** 7) Fazer um programa para que o usuário digite um nome, uma idade e um sexo 'M' ou 'F'.
O programa deverá exibir a mensagem:
"%s está aceita no projeto!" caso
(idade >= 18 && idade <= 35) &&  (sexo == 'F').

Caso contrário, exibir a mensagem: "%s não aceita no projeto".

O programa deverá verificar se a idade digitada é negativa, zero ou maior do que 100.
Caso seja, mensagem de erro e retornar para nova digitação. O sexo só poderá ser digitado
M ou F. Caso contrário, mensagem de erro e retorna para nova digitação.
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
        printf("A idade não pode ser negativa, nem igual a zero nem maior que 100. \n");
        goto inicio;

    } else if (!(sexo == 'F') && !(sexo == 'M')) {
        printf("O sexo infelizmente neste caso só pode ser F ou M. \n");
        goto inicio;

    } else if ( ((idade >= 18) && (idade <= 35)) && sexo == 'F') {
        printf("%s está aceita no projeto! \n", nome);

    } else {
        printf("%s não está aceita no projeto! \n", nome);
    }

    printf("Fim do programa! \n");

    system("pause");
}
