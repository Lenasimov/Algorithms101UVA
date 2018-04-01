/** 5) Fazer um programa para calcular a média de um aluno.
O programa deverá receber o nome do aluno, o sexo, a nota 1 e a nota 2.
O nome não poderá ultrapassar 50 caracteres.
O sexo não poderá ser diferente de 'm' ou 'f'.
As notas não poderão ser negativas e nem maiores que 10.
Caso aconteça, exibir uma mensagem de erro e retornar para digitação da informação errada.

Média < 4 == Reprovado
Média >= 6 == Aprovado
Média >= 4 e < 6 == Prova final

O programa deverá permitir a digitação de uma terceira nota (a nota da prova final).
A média final deverá ser a (terceira nota + média) / 2.

Verificar:
Média final < 6 == Reprovado
Média final >= 6 == Aprovado
**/

#include<locale.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    system("color 5D");
    setlocale(LC_ALL, "Portuguese");

    char nome[50], sexo[2];
    float n1 = 0, n2 = 0, n3 = 0, media = 0, mediaFinal = 0;

    inicio1:
        printf("Informe seu nome: ");
        gets(nome);

        if(strlen(nome) > 50) {
            printf("O nome não pode conter mais de 50 caracteres! Por favor, tente novamente! \n");
            goto inicio1;
        }

    inicio2:
        printf("Informe seu sexo (f) ou (m): ");
        scanf("%s", &sexo);

        if( !(strcmp(sexo, "f")) == 0 && !(strcmp(sexo, "m") == 0) ) {
            printf("Opção de sexo inválida! Por favor, tente novamente! \n");
            goto inicio2;
        }

    inicio3:
        printf("Informe a nota 1: ");
        scanf("%f", &n1);

        if(n1 <= 0 || n1 > 10) {
            printf("Nota 1 inválida! Por favor, tente novamente! \n");
            goto inicio3;
        }

    inicio4:
        printf("Informe a nota 2: ");
        scanf("%f", &n2);

        if(n2 <= 0 || n2 > 10) {
            printf("Nota 2 inválida! Por favor, tente novamente! \n");
            goto inicio4;
        }

    media = (n1 + n2) / 2;

    if(media < 4) {
        printf("Reprovado(a)! \n");

    } else if(media >= 6) {
        printf("Aprovada(o)! \n");

    } else if(media >= 4  && media < 6) {
        printf("Prova final! \n");

        printf("Informe a nota 3: ");
        scanf("%f", &n3);

        mediaFinal = (n3 + media) / 2;

        if(mediaFinal < 6) {
            printf("Reprovado(a)! \n");

        } else if(mediaFinal >= 6) {
            printf("Aprovada(o)! \n");

        }

    }

    puts("Fim do programa! \n");

    system("pause");
    return 0;
}
