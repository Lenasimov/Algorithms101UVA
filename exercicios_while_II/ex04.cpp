/** 4. Fazer um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
O n�mero digitado n�o pode ser zero e nem negativo.
Caso seja, exibir mensagem de erro e retornar para nova digita��o.
Em seguida, atrav�s de um �while�, pedir ao usu�rio que digite as notas de todos os alunos da sala, um por vez.
Por fim, o programa dever� mostrar a m�dia aritm�tica da turma. **/

#include<stdio.h>
#include<stdlib.h>

main() {

    int totalAlunos = 0, i = 1;
    float nota = 0, acumulador = 0, mediaAritmetica = 0;

    system("cls");
    system("color 5D");

    printf("Quantos alunos tem na turma? ");
    scanf("%d", &totalAlunos);

    while(totalAlunos <= 0) {
        printf("A quantidade de alunos nao pode ser zero nem negativa. Tente novamente! \n");
        printf("Quantos alunos tem na turma? ");
        scanf("%d", &totalAlunos);
    }

    while(i <= totalAlunos) {
        printf("Digite a nota do %d aluno: ", i);
        scanf("%f", &nota);
        acumulador += nota;
        i++;
    }

    mediaAritmetica = acumulador / totalAlunos;

    printf("Media aritmetica da turma: %.2f \n", mediaAritmetica);

    puts("\nFIM DO PROGRAMA!\n");

    system("pause");
}
